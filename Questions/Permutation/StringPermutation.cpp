#include <iostream>
#include <string>

using namespace std;

bool isFreqSame(int freq1[], int freq2[]) {
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}

bool permutation(string s1, string s2) {
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++) {
        int idx = s1[i] - 'a';
        freq[idx]++;
    }
    int windsize = s1.length();
    for (int i = 0; i <= s2.length() - windsize; i++) {
        int windfreq[26] = {0};
        for (int j = 0; j < windsize; j++) {
            windfreq[s2[i + j] - 'a']++;
        }
        if (isFreqSame(freq, windfreq)) {
            return true;
        }
    }
    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    bool result = permutation(s1, s2);
    if (result) {
        cout <<"Substring exists : true" << endl;
    } else {
        cout << "Substring exists : false" << endl;
    }

    return 0;
}
