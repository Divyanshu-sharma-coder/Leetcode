
// So here comes Hashing where we do PRE-STORING AND FETCHING.............

//  So unlike brute force we just create a Hash array and fill out that array with 0 and just go to our original array and do a precomputation we just check 1 and go to index 1 and ++ it if 2 go to index 2 of hash array ++ it so now we have 1 --> 1 and 2 --> and this will go on and when we have to access it we can do it just by calling index of that hash ARRay.

#include <iostream>
using namespace std;


int main(){
    int n; 
    cout << "Enter Size of Array : ";
    cin >> n;
    int arr[n];
    cout << "enter array elements seprated by space : " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // preCompute --
    int Hash[n+1] = {0};
    for(int i=0; i<n; i++){
        Hash[arr[i]] +=1;
        
    }

    int q;
    cout << "Enter total Number of Queries : "<< endl;
    cin >> q;
    cout << "Enter queries : " << endl;
    while(q--){
        int number;
        cin >> number;

        //  Fetch
        cout << "The total count of "<< number << " is " << Hash[number] << endl;
    }
    return 0;
}