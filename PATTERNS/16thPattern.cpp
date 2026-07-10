#include <iostream>

using namespace std;

void triangle(int n){
    
    for(int i =0; i<n; i++){
        char letter = 'A';
        for(int j=n; j>i; j--){
            cout << letter << " ";
            letter++;

        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter A Number : "; cin >> n; cout << endl;
    triangle(n);
    return 0;
}

// A B C D E
// A B C D
// A B C
// A B
// A