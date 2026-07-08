
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

