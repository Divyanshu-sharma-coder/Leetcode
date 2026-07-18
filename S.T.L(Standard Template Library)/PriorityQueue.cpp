// real Life use case ---
// Hospital Emergency Room (Triage): Patients are treated by severity of their condition, not arrival time. A patient with a heart attack (high priority) will be seen before someone with a minor cut, even if the cut arrived first.

// Job/Task Scheduling in Operating Systems: Computers manage multiple tasks simultaneously. Critical background processes or user commands jump ahead of idle background tasks.

// VIP Customer Support: Companies like Zendesk often route premium or enterprise-tier tickets to the front of the queue, ensuring top-paying customers get serviced faster than standard account


#include <iostream>
#include <queue>

// max priority Queue

using namespace std;

void Pqueue(){
    priority_queue<int> max_pq;

    max_pq.push(10);
    max_pq.push(20);
    max_pq.push(90);
    max_pq.push(120);
    max_pq.push(3);

    cout << max_pq.top() << endl;
    // output -- 120
    cout << endl;
    while(!max_pq.empty()){
        cout << max_pq.top() << endl;
        max_pq.pop();
    }

}
void MinPqueue(){
    cout << endl;
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(12);
    min_pq.push(293);
    min_pq.push(233);
        min_pq.push(2);
            min_pq.push(-1);

            while(!min_pq.empty()){
        cout << min_pq.top() << endl;
        min_pq.pop();
    }



}
int main(){
    Pqueue();
    MinPqueue();
    return 0;
}