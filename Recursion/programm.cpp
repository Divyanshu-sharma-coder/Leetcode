
#include <iostream>
using namespace std;

// 1. print name 5 times using Recursion
void name(int n){
    if(n > 5) return;
    cout << "Divyanshu" << endl;
    n++;
    name(n);

}
// 2. Print linearly from 1 to N
void Lin(int k, int i){
    if(i>k) return;
    cout << i << endl;
    i++;
    Lin(k, i);

}

// 3. Print from N to 1
void opp(int p, int o){
    if(p<o) return;
    cout << p << endl;
    p--;
    opp(p, o);
}

// 4. Print 1 to N Linearly but with BackTracking (don't use i++)

void Back(int x){
    if(x<1) return;
    Back(x-1);
    cout << x << endl;


}
void BackR(int y, int r){
    if(y > r) return;

    BackR(y+1, r);
    cout << y << endl;
}

int main(){
    int n = 1, i = 1, k = 7, o = 1, p = 7;

    int x = 7, y= 1, r = 7;
    
    cout <<"Name"<< endl;
    name(n);
    cout << endl;
    cout << "Linear" << endl;
    Lin(k, i);
    cout <<endl;
    cout <<"Reverse Linear" <<endl;
    opp(p, o);
    cout << endl;
    cout << "BackTrack Linear"<< endl;
    Back(x);
    cout << endl;
    cout << "BackTrack Reverse Linear"<< endl;
    BackR(y, r);
    return 0;
}