# 509. Substring with Concatenation of All Words

## 📋 Properties



## 📖 Problem Statement

Problem ID: 509

Slug: substring-with-concatenation-of-all-words

## 💻 Solution

```cpp

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty()) return result;

        int word_len = words[0].length();
        int num_words = words.size();
        int total_len = word_len * num_words;
        int s_len = s.length();

        if (s_len < total_len) return result;

        // Build frequency map for the required words
        unordered_map<string, int> word_count;
        for (const string& word : words) {
            word_count[word]++;
        }

        // Run the sliding window starting from each possible offset
        for (int i = 0; i < word_len; ++i) {
            int left = i;
            int right = i;
            unordered_map<string, int> seen_words;
            int count = 0;

            while (right + word_len <= s_len) {
                // Get the next word from the right side of the window
                string word = s.substr(right, word_len);
                right += word_len;


```

## ⚡ Performance Metrics

Performance metrics not available.

## 🎓 Layman's Explanation

### What This Problem Is About

This problem requires careful analysis of the input and constraints. The solution uses appropriate data structures and algorithms to efficiently solve the problem.

### How The Solution Works

1. **Input Analysis:** The solution first analyzes the input to understand the problem constraints.
2. **Algorithm Selection:** Based on the constraints, an appropriate algorithm is chosen.
3. **Implementation:** The algorithm is implemented using efficient data structures.
4. **Output:** The result is returned in the required format.

### Why This Approach

- **Efficiency:** The solution balances time and space complexity.
- **Readability:** The code is clear and easy to understand.
- **Scalability:** The approach works for various input sizes.
