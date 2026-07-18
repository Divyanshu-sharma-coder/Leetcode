// real Life analogy of deque or deck 
// Browser Tab Management: You can open a new tab at the end of your tab row, close the current tab you are looking at, or have the browser force-close the oldest un-activated tab from the front when memory runs low.

// Undo/Redo History with a Limit: Software tracks your actions so you can undo them (acting like a stack), but if the history list gets too long, it discards the oldest changes from the very bottom (front) to save memory.Deck of Cards: In many card games, you can deal or draw a card from the top of the deck, but some rules allow you to pull a card from the bottom of the deck as well.

// Stealing Tasks in Multithreading: In computer processing (like Java's ForkJoinPool), processors have their own queues of tasks. If one processor runs out of work, it can "steal" a task from the back of another processor's queue to balance the workload.




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