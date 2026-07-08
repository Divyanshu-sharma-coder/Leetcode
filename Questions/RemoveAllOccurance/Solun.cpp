#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";
    int n = s.length(), m=part.length();
    while(n>0 && s.find(part) < n){
        s.erase(s.find(part), m);
    }
    cout << s << endl;
    return 0;
}
