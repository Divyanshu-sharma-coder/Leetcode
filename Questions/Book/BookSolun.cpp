#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
#include <map>
using namespace std ;
bool isValid(vector <int> &arr, int n, int m, int mid){
     int student = 1, pages = 0;
     
     for(int i=0; i<n; i++){
         if(arr[i]>mid){
             return false;
         }
         if(pages + arr[i] <= mid){
             pages = pages + arr[i];
         }else{
             student++;
             pages = arr[i];
         }
     }
     return student > m ? false : true;
 }

int allocateBooks(vector <int> &arr, int n , int m){
    if(m>n){
        return -1;
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum+arr[i];
    }
    int ans = -1;
    int start = 0;
    int end = sum;
    
    while(start <= end){
        int mid = start + (end-start)/2;
        
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid + 1;
        }
    }
    return ans;
}
int main() {
    vector <int> arr = {15, 17, 20};
    int n = arr.size();
    int m = 2;
    cout << allocateBooks(arr, n, m)<< endl;
    return 0;
}
