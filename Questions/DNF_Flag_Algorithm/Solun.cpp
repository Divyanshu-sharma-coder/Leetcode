#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cout << "Optimized approach" << endl;
    int nums [] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int n = sizeof (nums)/4;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    
    for(int i=0; i<n; i++){
        if(nums[i] == 0){
            count0++;
        }else if(nums [i] == 1){
            count1++;
        }else{
            count2++;
        }
    }
    int idx = 0;
    for(int i=0; i<count0; i++){
        nums[idx++] = 0;
    }
    for(int i=0; i<count1; i++){
        nums[idx++] = 1;
    }
    for(int i=0; i<count2; i++){
        nums[idx++] = 2;
    }
    
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << endl;
    
    
    cout << "Dutch - national flag algo." << endl;
    int array [] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int k = sizeof (array)/sizeof (int);
    int low = 0;
    int mid = 0;
    int high = k-1;
    
    while(mid <= high){
        if(array[mid] == 0){
            swap(array[low], array[mid]);
            low++;
            mid++;
        }else if (array[mid] == 1){
            mid++;
        }else{
            swap(array[high], array[mid]);
            high--;
        }
    }
    for(int i=0; i<k; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
