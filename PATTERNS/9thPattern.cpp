#include <iostream>
using namespace std;

void diamond(int n){
    // For rows
    for(int i=0; i<n; i++){
        // For leading spaces 
        for (int j=0; j<(n-i)-1; j++){
            cout << " ";
        }
        // for Stars
        for(int k=0; k<(2*i)+1; k++){
            cout << "*";
        }
        cout << endl;
    }
}

void triangle (int n){
    // For rows
    for (int i = 0; i < n; i++){
        
        // 1. Print leading spaces first (increases with each row)
        for(int k = 0; k < i; k++){
            cout << " ";
        }
        
        // 2. Print stars second (decreases with each row: 2*(n-i)-1)
        for(int j = 1; j <= (2 * (n - i)) - 1; j++){
            cout << "*";
        }
        
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Rows : ";
    cin >> n;
    cout << endl;
    diamond(n);
    triangle(n);
    return 0;
}