# 640. Longest Substring Without Repeating Characters

## 📋 Properties



## 📖 Problem Statement

Problem ID: 640

Slug: longest-substring-without-repeating-characters

## 💻 Solution

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Map to store the last seen index of each character
        vector<int> lastIdx(256, -1);
        int maxLen = 0;
        int start = 0; // Left boundary of the sliding window
        
        for (int i = 0; i < s.length(); i++) {
            char currentChar = s[i];
            
            // If the character was seen inside the current window, shrink the window
            if (lastIdx[currentChar] >= start) {
                start = lastIdx[currentChar] + 1;
            }
            
            // Update the last seen position of the character
            lastIdx[currentChar] = i;
            
            // Calculate and update the maximum length found so far
            maxLen = max(maxLen, i - start + 1);
        }
        
        return maxLen;
    }
};


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
