// Reverse A number

#include <iostream>
using namespace std;



void reverse(int n){
    if(n == 0) return;

    while(n>0){
        int i = n%10;
        cout << i;
        n = n/10;
    }

}

int main(){
    int n;
    cout << "Enter A Number : ";
    cin >> n;
    cout << endl;
    reverse(n);
    return 0;
    
}