#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int previous = i-1;

        while(previous >= 0 && arr[previous]>current){
            arr[previous+1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current ;
    }
}
void printarray (int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {4, 1, 2, 5, 3};
    int n = sizeof (arr)/ sizeof (int);

    insertionSort (arr, n);
    printarray(arr, n);
    cout << endl;

}
