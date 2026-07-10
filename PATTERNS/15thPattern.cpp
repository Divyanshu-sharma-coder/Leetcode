#include <iostream>

using namespace std;

void triangle(int n){
    for(int i=0; i<n; i++){
        char letter = 'A'+(n-1)-i;
        for (int j = 0; j<=i; j++){
            cout << letter;
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