#include <iostream>
using namespace std;

void bubbleSort(int array[], int n){
    for(int i=0; i<n-1; i++){
      bool  isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(array[j]>array[j+1]){
                swap(array[j], array[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return ;
        }
    }
}

void printArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout << array[i] << " ";
    }
}
int main(){
    int array [] = {11, 10, 12, 14, 12, 15, 14, 13, 15, 102, 12, 14, 17, 19, 107, 10, 13, 12, 14, 12, 100, 12, 11, 14, 13, 15, 10, 15, 12, 10, 14, 13, 15, 19};
    int n = sizeof (array)/ sizeof (int);
    bubbleSort(array, n);
    printArray(array, n);
    cout << endl;
}
