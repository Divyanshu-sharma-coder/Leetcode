#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque <int> d = {1, 2, 3, 4, 5};
    for(int val : d){
        cout << val << ", ";
    }
    cout << endl;
    d.push_back(12);
    d.push_back(34);
    d.push_front(23);
    d.push_front(94);
    for( auto  i = d.begin(); i != d.end(); i++){
        cout << *(i) << ", ";
    }
    cout << endl;

    return 0;
}