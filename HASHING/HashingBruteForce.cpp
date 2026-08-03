// So basically the question is you have an Array like this {1, 2, 1, 3, 1, 2} and i will ask you tell me what is the total count of 1 you probably say --> 3, then what 2 --> 2, 3 --> 1, 4 --> 0, 10 --> 0 so this is the the count of any number in that array how can we found that count.

// SO the first Brute force is by applying a Loop 

// So here is the brute Force---

#include <iostream>
#include <algorithm>
using namespace std;

void cou(){
    int count = 0;
    int arr[]= {1, 2, 1, 2, 3, 1, 4};
    int a;
    int n = sizeof (arr)/sizeof (arr[0]);
    cout << "Enter a Number for its Count : ";
    cin >> a;
    cout << endl;
    for(int i=0; i<n; i++){
        if(arr[i] == a) count +=1;
    }
    cout << "The total count of " << a << " is " << count << endl; 
    
}

int main(){
    cou();
    return 0;

}

// So if there are currently one query like we gave a single input so T.C is O(n) but in Leetcode we have multiple queries like check for 5, 1, 2, 3, etc. etc. and for that the T.C is increased and thats why t.c is O(q*n) where q is number of queries



