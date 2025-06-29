#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cctype>
#include <unordered_map>
using namespace std;

//function to normalizxe the texts i.e reading only alphabets and numbers, and then conveting all letters to lowercase.
vector <string> is_clean(string txt) {
	string cleaned = "";
	for (char c: txt) {
		if(isalpha(c)||isspace(c)||isdigit(c)) {
			cleaned += tolower(c);
		}
	}

	vector <string> words;
	stringstream ss(cleaned);
	string word;
	while(ss >> word) {
		words.push_back(word);
	}
	return words;
}

//main function starts.

int main()
{	string txt1,txt2;
	cout << "Enter text1:" << endl;
	getline(cin,txt1);
	cout << "Enter text2:" << endl;
	getline(cin,txt2);

	vector<string> t1 = is_clean(txt1); //cleaning the texts.
	vector<string> t2 = is_clean(txt2);

	/* function if u want to print the normalized text!

	for (string word : t1 ) {
		cout << word << " " ;
	}
	cout << endl;
	for (string word : t2 ) {
		cout << word << " " ;
	}
	  cout<< endl;

	function ends*/

	unordered_map<string,int> freq1,freq2; //using unordered_map to store words(key) to their respective frequencies (value)
	for (auto word : t1) {
		freq1[word]++ ;
	}
	for (auto word : t2) {
		freq2[word]++ ;
	}

	int common =0; //finding common words among the two texts.
	for (auto pair : freq1) {
		string word = pair.first;
		if  (freq2.find(word) != freq2.end()) {
			common ++;
		}
	}

//for printing common words (if the user want to)
	cout << "If u want to print common words, press o, otherwise press x: ";
	char x;
	int k;
	cin >> x;
	if (x=='o') {
		cout << "The common words are : " ;
		for (auto pair : freq1) {
			for (auto it : freq2) {
				if (pair.first == it.first ) {
					cout << it.first << " ";
					k++;
				}
			}
		}
		cout << endl << "Total common words : " << common;
	}
	else {};

//else function if the user does not want to print the common words.
	cout << endl ;
	int unique= freq1.size()+freq2.size() - common; //finding unique words.
	double similarity_percentage;

//finding similarity among the two texts.
	if (unique == 0) {
		similarity_percentage = 0;
	} else {
		similarity_percentage = (common * 100.0) / unique;
	}
	cout << "Total Unique words : " << unique << endl ;
	cout << "Similarity percentage : " << similarity_percentage << endl;
	if (similarity_percentage>= 80.00) {
		cout << "Plagiarism level : High" << endl;
	}
	else if (similarity_percentage>=50.00) {
		cout << "Plagiarism level : Moderate " << endl;
	}
	else {
		cout << "Plagiarism level : Low " << endl;
	}

	return 0;
}