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

