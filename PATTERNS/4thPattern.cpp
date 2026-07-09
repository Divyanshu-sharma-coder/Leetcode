#include <iostream>
using namespace std;

void triangle(int n){
    int num =1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
        cout << num << " ";
        }
        cout << endl;
        num+=1;
        
    }
}

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << endl;
    triangle(n);

}
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
// 6 6 6 6 6 6 
// 7 7 7 7 7 7 7 
// 8 8 8 8 8 8 8 8 
// 9 9 9 9 9 9 9 9 9 
// 10 10 10 10 10 10 10 10 10 10