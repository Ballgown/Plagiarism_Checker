# C++ Plagiarism Checker 🔍

A simple yet effective C++ program to check text similarity by comparing word frequencies. It normalizes input texts, removes special characters, compares word sets, and estimates a similarity percentage to detect possible plagiarism.

---

# Features

- Takes **two text inputs** from the user
- Normalizes text: removes punctuation, converts to lowercase, keeps only words and numbers
- Counts word frequencies using `unordered_map`
- Finds common words and unique words
- Calculates **similarity percentage**
- Detects plagiarism level: **Low**, **Moderate**, or **High**
- Optionally prints common words for manual review

---

# How It Works

1. User inputs two texts  
2. Program normalizes both (removes unwanted symbols)  
3. Builds frequency maps for each text  
4. Compares to find common and unique words  
5. Calculates plagiarism percentage
---

# How to Run

1. Copy the `main.cpp` into your C++ IDE or online compiler  
2. Compile and run  
3. Enter text1 and text2 when prompted  
4. Optionally print common words  
5. View the similarity percentage and plagiarism level

---

# File Structure
Plagiarism-Checker
=> main.cpp
=>README.md
# Example Output

Enter text1:
This is my original paragraph.

Enter text2:
This paragraph is partly copied.

Similarity percentage: 42.8571
Plagiarism level: Low


