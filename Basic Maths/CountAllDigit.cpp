// Count all Digit of a Number ---
#include <iostream>
using namespace std;

int Count(int n){
    int count = 0;

    if (n == 0) return 1;
    while(n>0){
        n = n/10;
        count++;
    }
return count;

}

int main(){
    int n;
    cout << "Enter a Digit : ";
    cin >> n;
    cout << endl;
    cout << "count is : "<< Count(n) << endl;
    
    return 0;
}