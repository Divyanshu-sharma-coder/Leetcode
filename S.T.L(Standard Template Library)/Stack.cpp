#include <iostream>
#include <stack>
using namespace std;

void Stack(){
    // Stack is a linear data structure that follows LIFO --> (Last in first out) means the elements which go last pop up first
    stack <int> s;
    s.push(34);
    s.push(23);
    s.push(212);
    s.push(90);
    s.push(5);
    
    cout << s.top() << endl;
    cout << s.size() << endl;
    
    cout << endl;
    // Accessing
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    

};

int main(){
   Stack();
    return 0;
}