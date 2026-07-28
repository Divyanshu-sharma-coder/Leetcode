// 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153 
#include <iostream>
#include <cmath>
using namespace std;

bool isArmStrong(int n, int k){
    if (n==0) return true;
    int sum = 0;
    int power;
    int original = n;

    while(n>0){
        int i = n%10;
        power = round(pow(i, k));
        sum += power;
        n = n/10;
    }
    if(sum != original){
        return false;
    }

    return true;


}

int main(){
    int n, k;
    cout << "Digit : ";
    cin >> n;
    cout << endl;
    k = (n == 0) ? 1 : std::log10(std::abs(n)) + 1;

    if (isArmStrong(n, k)){
        cout << "it is an Armstrong Number" << endl;
    }else{
        cout << "Not an Armstrong Number" << endl;
    }
    return 0;
}