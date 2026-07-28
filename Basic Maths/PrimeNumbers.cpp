#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;  
    if (n == 2) return true;    
    if (n % 2 == 0) return false; 

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false; 
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << endl;

    if (isPrime(n)) {
        cout << n << " is a Prime Number" << endl;
    } else {
        cout << n << " is Not A Prime" << endl;
    }
    return 0;
}
