#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[] = {1, 2, 3, 0, 0, 0};
    int b[] = {2, 5, 6};
    int m = sizeof (a)/sizeof (a[0]) - sizeof (b)/sizeof (b[0]);
    int n = sizeof (b)/sizeof (b[0]);
    int idx = m+n-1, i=m-1, j=n-1;
   // cout << idx << endl;
   // cout << i << endl;
   // cout << j << endl;
   // cout << endl;
    
    while(i>=0 && j>=0){
        if(a[i]>=b[j]){
            a[idx]=a[i];
            idx--;
            i--;
        }else{
            a[idx]= b[j];
            idx--;
            j--;
        }
    }
    while(j>=0){
        a[idx]=b[j];
        idx--; j--;
    }
    for(int k=0; k<m+n; k++){
        cout << a[k] << " ";
    }
    cout << endl;
    
    return 0;
}
