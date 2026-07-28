// So basically a subsequence is a contiguous or non contiguous sequence of a number or array but with an order 
// {3, 1, 2} = {}, 3, 1, 2, 31, 12, 32,  312.
// but not 321 coz not a order

// so the main difference between subarray and a subsequence is that subarray is contiguous but subSequence can be contiguous and non contiguous
// so a Subarray can be Subsequence but subsequence not always the subarray

// so here are total 8 subsequence of an 3 sized array.
// and out qoruk is to print out all subsequence of an array

#include <iostream>
#include <vector>
using namespace std;

void Subseq(int arr[], vector <int> &vec, int n, int idx){
    if(idx >= n){
        cout << "{";
        for(int val : vec){
            cout  << val << " ";
        }
        cout << "}";
        cout << endl;
        return;
    }
    vec.push_back(arr[idx]);
    Subseq(arr, vec, n, idx+1);
    vec.pop_back();
    Subseq(arr, vec, n, idx+1);



}
int main(){
int arr[]= {3, 1, 2};
vector <int> vec;
int n = sizeof (arr)/sizeof (arr[0]);
Subseq(arr, vec, n, 0);
}