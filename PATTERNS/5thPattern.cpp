#include <iostream>
using namespace std;

void triangle(int n){
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout << " * ";
        }
        cout << endl;
    }
}

int main(){
  
    int n;
    cout << "Enter Number of Rows : ";
    cin >> n;
    cout <<endl;
    triangle(n);
}

// * * * * *
// * * * *
// * * * 
// * *
// *