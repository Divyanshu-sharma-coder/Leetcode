// Using to make two pointers to run on whole array 
// T.C is O(n)

#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
        
    }

}
int main(){
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr)/sizeof (arr[0]);
    reverse(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

}