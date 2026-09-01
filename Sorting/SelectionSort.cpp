#include <iostream>
#include <algorithm>

using namespace std;
void SelectionSort(int arr[], int n){
    for(int i=0; i<=n-2; i++){
        int small = i;
        for(int j=i; j<= n-1; j++){
            if(arr[j] < arr[small]){
                small = j;
            }
        }
        swap(arr[i], arr[small]);
    }
}

int main(){
    int arr[] = {12, 34, 73, 7273, 726, 8273, 82738263, 84, 272, 1829};
    int n = sizeof (arr)/ sizeof (int);
    SelectionSort(arr, n);
    cout << "Sorted Array : " << endl;

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
    return 0;
}
