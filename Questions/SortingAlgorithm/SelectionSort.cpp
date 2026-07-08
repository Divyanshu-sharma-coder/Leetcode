#include <iostream>
#include <algorithm>

using namespace std;

void SelectionSort(int array[], int n){
    for(int i=0; i<n-1; i++){
        int smallestNumber = i;
        for(int j=i+1; j<n; j++){
            if(array[j] < array[smallestNumber]){
                smallestNumber = j;
            }
            
        
        }
        swap(array [i], array[smallestNumber]);
    }
}
void printArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout << array[i] << " ";
    }
}


int main(){
    int array[] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int n = sizeof (array)/ sizeof (int);
    
    SelectionSort(array, n);
    printArray(array, n);
    cout << endl;
}
