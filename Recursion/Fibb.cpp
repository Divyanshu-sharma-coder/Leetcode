#include <iostream>
using namespace std;

// Fibonacci series using loops --

void fib(int n){
    int a = 0;
    int b = 1;
    for(int i =0; i<=n; i++){
        cout << a << " : ";
    
    int next = a+b;
    a = b;
    b = next;
    }
   
}


//  Using Recursion -- 
int Recurs(int k){
    if (k<=1) return k;

    return (Recurs(k-1) + Recurs(k-2));

}




int main(){
    int n;
    cout << "Enter a Digit : ";
    cin >> n; 
    cout << endl;
    int k = n;
    fib(n);
    cout << endl;
    cout << "Using Recusrion" << endl;


    Recurs(k);
    for(int i=0; i<=k; i++){
        cout << Recurs(i) << " : ";
    }
    cout << endl;
    return 0;
}