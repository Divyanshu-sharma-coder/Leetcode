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