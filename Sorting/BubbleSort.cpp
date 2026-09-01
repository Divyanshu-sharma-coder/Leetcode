#include <iostream>
#include <algorithm>

using namespace std;

void BubbbleSort(int arr[], int n){
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j]> arr[j+1]){
             swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {2, 5, 1, 4, 3, 8, 5, 19, 11};
    int n = sizeof (arr)/ sizeof (int);
    cout << "\n Bubble Sort : ";
    BubbbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
    return 0; 
}
