// Reverse An Array
#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

// void reverse(int arr[], int n){
//     int start = 0;
//     int end = n-1;
//     while(start<end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
  
// Doing this using Recursion
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof (arr)/ sizeof (arr[0]);
//     reverse(arr, n);
//     for(int i=0; i<n; i++){
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// 1. Reverse an array using Recursion ----

void Rev(int arr[], int l, int n, int r){
    // if (l>=r) return;
    // swap(arr[l], arr[r]);
    // Rev(arr, l+1, r-1);
    // OR
    if(l >= n/2) return;
    swap(arr[l], arr[n-l-1]);
    Rev(arr, l+1, n, r);
}


// 2. Check weather a String is Palindrome or not---
bool Palin(const string& s, int i, int d){
    if(i>=d){
        return true;
    }

        if (!isalnum(s[i])) {
            return Palin(s, i + 1, d);
        }

        if (!isalnum(s[d])) {
            return Palin(s, i, d - 1);
        }
    if(tolower(s[i])!=tolower(s[d])){
        return false;
    }

    return Palin(s, i+1, d-1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof (arr)/ sizeof (arr[0]);
    int l = 0;
    int r = n-1;
    Rev(arr,l, n, r);
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
    string s;
    cout << "ENter a String here : ";
    cin >> s;
    cout << endl;
    int d = s.length()-1;
    int i = 0;
    if (Palin(s, i, d)){
        cout << "Palindrome" << endl;
    }else{
        cout <<"Not a Palindrome" << endl;
    }
    return 0;
}