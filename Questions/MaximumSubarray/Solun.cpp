#include <iostream>
using namespace std;
int main() {
    int array [] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof (array)/ sizeof (int);
    int current_sum = 0;
    int max_sum = array[0];

    for(int i=0; i<n; i++){
        current_sum = current_sum + array[i];
        max_sum = max(current_sum , max_sum);

        if(current_sum < 0){
            current_sum = 0;
        }

    }

    cout << max_sum << endl;
}
