// SO we have an Array and we need to find out its maximum subarray thats how we do this --
// Brute Force with T.C O(n^3)

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n= sizeof (arr)/sizeof (arr[0]);

    for(int start = 0; start <n; start++){
        for(int end = start; end<n; end++){
            for(int i = start; i <= end ; i++){
                cout << arr[i];
            }
            cout << " | " ;
        }
        cout << endl;
    }
    return 0;
}
