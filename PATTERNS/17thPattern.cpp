#include <iostream>

using namespace std;

void triangle(int n){
    char letter = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << letter << " ";
        }
        cout << endl;
        letter++;
    }
    
}

int main(){
    int n;
    cout << "Enter A Number : "; cin >> n; cout << endl;
    triangle(n);
    return 0;
}