#include <iostream>
#include <algorithm>

using namespace std;

void Insertion(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 and arr[j-1]>arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

int main(){
    int arr[] = {1, 4, 2, 3, 5, 7, 1};
    int n = sizeof (arr)/ sizeof (int);
    cout << "Insertion Sort : ";
    Insertion(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}