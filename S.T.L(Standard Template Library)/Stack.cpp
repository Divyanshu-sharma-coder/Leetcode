// Real Life Usecase ---

// Web Browser History: When you click the back button, the browser takes you to the most recent page you visited by popping it off the top of your history stack.

// Undo/Redo Mechanisms: Software like Microsoft Word or Photoshop stores your actions in a stack, allowing you to reverse your very last action first when you press Ctrl + Z.Stack of Dinner Plates: You place new plates on top of the pile and take plates off the top, meaning the bottom plate is only used when all others are gone.

// Call Stack in Programming: Operating systems use a stack to keep track of active function calls, returning control to the most recently called function once the current execution finishes.



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