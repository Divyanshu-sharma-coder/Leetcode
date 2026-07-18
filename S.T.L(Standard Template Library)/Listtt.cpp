// Real Life Analogy --

// Grocery Shopping List: Items are written down in a specific order, and you can cross off items or add new ones anywhere on the page as you walk through different store aisles.

// Music Playlists: Songs are arranged in a specific sequence from first to last, but you can easily insert a new song in the middle, reorder the tracks, or delete song number five.

// Contact Directory on a Phone: Your phone stores a list of names and numbers that you can scroll through, allowing you to instantly view or edit any contact regardless of when it was added.

// Leaderboards in Video Games: Players are ranked from top to bottom based on score, and the list dynamically updates positions whenever someone achieves a higher score.


#include <iostream>
#include <list>

using namespace std;

int main(){
    list <int> li = {1, 2, 2, 3, 4, 4, 5};
    for(int val : li){
        cout << val << " ";

    }
    cout << endl;
    li.push_back(5);
    li.push_back(87);
    li.push_front(1);
    li.push_front(34);
    li.pop_back();
    li.pop_front();
    li.push_back(54);
    li.push_front(45);
    cout << "New List after Pushing value is : ";
    for(auto it = li.begin(); it != li.end(); it++){
        cout << *(it) << ", ";
    }
    cout << endl;
    cout <<"Front Value : " << *(li.begin())<< endl;
    cout<< "end value (garbage) : " << *(li.end()) << endl; //a garbage value
    cout << "reverse begin : " << *(li.rbegin()) << endl;
    cout << "Reverse End (Garbage value) : " << *(li.rend()) << endl;
    cout <<"Front Value : "<< li.front() << endl;
    cout <<"Back Value : "<< li.back() << endl;
    li.sort();
    cout << "Sorted List : ";
    for(int val : li){
        cout << val << ", ";
    }
    cout << endl;
    cout << "Reversed List : ";
    li.reverse();
     for(int val2 : li){
        cout << val2 << ", ";
    }
    cout << endl;
    cout << "Unique List : ";
    li.unique();
     for(int val3 : li){
        cout << val3 << ", ";
    }
    cout << endl;

} 