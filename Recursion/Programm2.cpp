// Sum of N numbers using Recursion

#include <iostream>
using namespace std;

int Sum(int i, int j){
    if(i > j) return 0;
    return i + Sum(i+1, j);
}


//  Parameterized Wayyy

void s(int r, int sm){
    if(r<1){
        cout << sm << endl;
        return;
    }
    s(r-1, sm+r);
}

// Functional Wayyy 
// So basically i can say 5 = 1 + 4 
// Therefore we can say f(n) = f(1) + f(n-1)

 int f(int n){
    if(n==0) return 0;
    return n + f(n-1);
 }

//  Factorial Program with Functioanl wayyy :: 
// 5! = 5*4!

long long int Fact(long long int fac){
    if(fac<=1) return 1;
    return fac * Fact(fac-1);

}
int main(){
    int i = 1, j = 5, r=5, n=5;
    long long int fac = 5;
    int sm = 0;
   cout << Sum(i, j) << endl;
   cout << endl;
   cout << "Parameterized Wayyy :: "<< endl;
   s(r, sm);
   cout << "Functional Wayyy :: " << endl;
   cout << f(n);
   cout << endl;
   cout << "Factorial" << endl;
   cout << Fact(fac) << endl;
    return 0;

}