#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {1, 2, 3, 4, 5};
    for (int val : vec){
        cout << val << " , ";
    }
    cout << endl;
    cout << "size of Vector is : " << vec.size() << endl;
    int value;
    cout << "Enter the value to Push in a vector : " ;
    cin >> value;
    cout << endl;
    vec.push_back(value);
    cout << "new Vector is : ";
    for(int val2 :vec){
     cout << val2 << " , ";
    }
    cout << endl;
    cout << "After popping that value the vector is : ";
    vec.pop_back();
    for(int val3:vec){
    cout << val3 << " , " ;
    }
    cout << endl;
    cout << "the initial values of the Vector is : "<<vec.front() << endl;
    
    cout << "The last values of the vector is : " << vec.back() << endl;
    int index ;
    cout << "Enter a index to print its value : ";
    cin >> index;
    cout<<endl;
    cout << "The value at that position is : " << vec.at(index) << endl;
    return 0;
}