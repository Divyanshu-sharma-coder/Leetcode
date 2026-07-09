#include <iostream>
using namespace std;

void triangle (int n){
    // For rows
    for (int i = 0; i < n; i++){
        
        // 1. Print leading spaces first (increases with each row)
        for(int k = 0; k < i; k++){
            cout << " ";
        }
        
        // 2. Print stars second (decreases with each row: 2*(n-i)-1)
        for(int j = 0; j < (2 * (n - i)) - 1; j++){
            cout << "*";
        }
        
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the value : ";
    cin >> n;
    cout << endl;
    triangle(n);
    return 0;
}
