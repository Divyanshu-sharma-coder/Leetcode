// palindrome Number :- 121 == 121 if reverse it thats a Palindrome Number
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isPalin(int n){
//  lets convert that Number into String 
string s = to_string(n);
int start = 0;
int end = s.length() - 1;
while(start <= end){
    if(s[start] != s[end]){
        return false;
    }
    start++;
    end--;
}
return true;
}



int main(){

    int n;
    cout << "Enter A Number : ";
    cin >> n;
    cout << endl;
    if(isPalin(n)){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not a Palindrome" << endl;
    }
    return 0;
}