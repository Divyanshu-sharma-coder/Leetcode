#include <iostream>
using namespace std;

void upper(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void lower(int n){
    for(int i=0; i<n; i++){
        for(int j=n; j > i; j--){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "ENter Row : ";
    cin >> n;
    cout << endl;
    upper(n);
    lower(n);
    return 0;
}