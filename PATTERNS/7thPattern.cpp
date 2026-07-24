#include <iostream>
using namespace std;

void triangle(int n){
    for(int row = 1; row <= n; row++){
        
        for(int i = 1; i <= n - row; i++){
            cout << " ";
        }
        
        for(int j = 1; j <= (2 * row) - 1; j++){
            cout << "*";
        }

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
