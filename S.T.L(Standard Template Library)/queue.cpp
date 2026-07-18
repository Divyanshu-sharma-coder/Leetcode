// Real Life use case --
// Ticket Counter Lines: People line up to buy a movie ticket, and the person who arrived first is served first.Printer 

// Task Scheduling: When multiple users send documents to a single office printer, the machine prints them in the exact order they were received.Customer Service 

// Call Centers: Callers are placed on hold and spoken to in the sequence they dialed in, often announced as "your call will be answered in the order it was received."

#include <iostream>
#include <queue>

using namespace std;

void Queue(){
    queue <int> q;
    // queue is a structure store elements in FIFO(First in First Out)

    q.emplace(23);
    q.emplace(38);
    q.emplace(34);
    q.emplace(726);
    cout << q.size() << endl;

    while(!q.empty()){
     cout << q.front() << endl;
     q.pop();
    }
    cout << q.size() << endl;

}
int main (){
   Queue();
    return 0;
}