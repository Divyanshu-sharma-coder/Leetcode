#include <iostream>
#include <vector>


using namespace std;

void Pair(){
    pair <int, int>p1 = {1, 2};
    pair <char, int>p2 = {'D', 5};
    cout << p1.first << " This is first element and this is second " << p1.second << endl;
     cout << p2.first << " This is first element and this is second " << p2.second << endl;
    //  Passing pair to pair
    pair <int, pair<char, int>> p3 = {5, {'A', 4}};

     cout << p3.first << " This is first element and this is second's First " << p2.first << " And this is second's second "<< p2.second << endl;

     vector <pair <int, int>> p4 = {{1,2 }, {5, 6}};

    //  Accessing 
    for (pair <int, int> val : p4){
        cout << "{" << val.first << ", " << val.second << "}, ";
    }
    cout << endl;

}

int main(){
    Pair();

}