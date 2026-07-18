// Real Life Analogy --

// Coordinates (X, Y): A point on a map couples a specific latitude with a longitude to pinpoint an exact physical location.Key-Value 

// Credentials: A login system links a username with its matching password to grant account access.Measurement Units: A physical reading groups a numerical magnitude with its unit, such as (180, "cm") or (75, "kg").

// Product Pricing: An e-commerce tag links a product name directly to its price (e.g., "Wireless Mouse", $25).

// Two-Player Matchups: Sports scoreboards link two opponents together for a game, tracking (Team A, Team B).

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