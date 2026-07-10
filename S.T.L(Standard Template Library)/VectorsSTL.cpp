#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vec2; //  Null vector
    vector <int> vec = {1, 2, 3, 4};  //Defined vector
    vector <int> vec3(3, 10); // this vector contains 10- 3 times
    vector <int> vec4(vec2); //Passing one vector into another

    // for(int val : vec3){
    //     cout << val << " ";
    // }
    // cout << endl;
    // // Size and capacity capacity is multiple of 2

    // cout << vec2.size() << endl;
    // cout << vec2.capacity() << endl;
    // vec.push_back(5);
    // vec.push_back(6);
    // vec.pop_back();
    // vec.emplace_back(90);
    // cout << vec.at(1) << endl;
    // cout << vec.front() << endl;
    // cout << vec.back() << endl;
    // for(int val1:vec){
    //     cout << val1 << " ";
    // }
    // cout << endl;

    // Iterators
    vector <int> a = {2, 4, 6, 8, 10};
    cout << *(a.begin()) << endl;
    cout << *(a.end()) << endl; // always gives a Garbage Value----

    cout << *(a.rbegin()) << endl; //reverse start mean last value
    cout << *(a.rend()) << endl;  //Reverse Last value but always +1 so a Garbage value it throws

    //Advanced LOOPS
    cout << endl;
    //For Forward

    vector <int> :: iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    // also we can run this loop like this --

    for( vector <int> :: iterator it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    // bestest way
    for(auto it = a.begin(); it != a.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // for Reverse Loop 

    for(auto it = a.rbegin(); it != a.rend(); it++){
        cout << *(it) << " ";
    }
    cout << endl;



}