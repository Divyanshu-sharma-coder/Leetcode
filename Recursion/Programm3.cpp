// Reverse An Array
#include <iostream>
#include <algorithm>
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


void Rev(int arr[], int l, int n, int r){
    // if (l>=r) return;
    // swap(arr[l], arr[r]);
    // Rev(arr, l+1, r-1);
    // OR
    if(l >= n/2) return;
    swap(arr[l], arr[n-l-1]);
    Rev(arr, l+1, n, r);
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
    return 0;
}