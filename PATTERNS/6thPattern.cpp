#include <iostream>
using namespace std;

void triangle(int n){
    for(int i=0; i<n; i++){
        int num = 1;
        for(int j=n; j>i; j--){
            cout << num << " ";
            num +=1;
            }
        cout << endl;


    }
}

int main(){
    int n;
    cout <<"Enter Number of rows : ";
    cin >> n;
    cout << endl;
    triangle(n);
}


// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1