#include <iostream>
using namespace std;

void Triangle(int n){
    // int t = 1;
    for(int i=0; i<n; i++){
        int num = 1;
        for(int j=0; j<=i; j++){
            cout << num ;
            num+=1;
        }
        // For Middle spaces___
        for(int k=0; k < (2*n - 2)-2*i; k++){
            cout << " ";

        }
        // for other triangle 
        for (int w = i+1; w >= 1; w--){
            cout << w;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Rows : ";
    cin >> n;
    cout << endl;
    Triangle(n);


    return 0;
}