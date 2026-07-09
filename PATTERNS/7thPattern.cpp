#include <iostream>
using namespace std;

void triangle(int n){
    // Outer loop controls the current row (from 0 to n-1)
    for(int row = 0; row < n; row++){
        
        // 1. Print leading spaces
        for(int i = 0; i < n - row - 1; i++){
            cout << " ";
        }
        
        // 2. Print stars (formula for odd numbers: 2 * row + 1)
        for(int j = 0; j < (2 * row) + 1; j++){
            cout << "*";
        }
        
        // 3. Move to the next line (trailing spaces are unnecessary)
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << endl;
    triangle(n);
    return 0;
}
