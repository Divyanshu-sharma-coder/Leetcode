#include <unordered_map>
#include <map>
#include <array>
#include <string>
// Not in Lexographical Order like A-B-C-D 

// Stores key-Values in a HashMap unordered but fast Access
// Unique keys , Faster then Map

// // Real Lie usecases --
// 1. High-Frequency Trading & Stock Tickers (The "Instant Price" Pattern)In financial markets, stock prices change thousands of times per second. 
// Algorithms need to look up a stock's current price instantly without waiting for a sorted tree search.
// Key: Stock Ticker Symbol ("AAPL", "TSLA").
// Value: Current stock price (150.25).
// Why unordered_map?: Traders need the absolute fastest lookup speed (O(1)). Keeping the symbols alphabetically sorted (AAPL before TSLA) provides no benefit and wastes valuable processing time.

// 2. Network Routing Tables & Firewalls (The "Packet Filtering" Pattern)Every second, internet firewalls screen millions of data packets to block malicious traffic.
// Key: IP Address (192.168.1.1).
// Value: Traffic permission status ("ALLOWED" or "BLOCKED").
// Why unordered_map?: Security systems must decide whether to drop or pass a packet in nanoseconds. 
// An unordered map checks if an IP is in the blacklist instantly, regardless of how many millions of blacklisted IPs exist.

// 3. Gaming Servers & Session Management (The "Active Player" Pattern)
// Multiplayer game servers (like Fortnite or Call of Duty) track hundreds of thousands of active player connections simultaneously.
// Key: Player Session ID (xyz789_auth).
// Value: Player stats (coordinates, health, current weapon).
// Why unordered_map?: When a player moves or shoots, the server must update their position instantly. Order doesn't matter; raw lookup and update performance are the only priorities to prevent in-game lag.


// Why UNORDERED MAP IS FASTER *****

// std::map (Red-Black Tree): It is built as a self-balancing binary search tree. To find an element, the computer must start at the root node and step down through the left or right child nodes one by one.

// std::unordered_map (Hash Table): It is built as a large array of "buckets." Instead of searching through nodes, it uses a math formula called a hash function to convert your key directly into an array index.

#include <iostream>
using namespace std;

void UnOrderedMap(){
    unordered_map <string, int> basket;

    basket["Banana"] = 23;
    basket["Apple"] = 123;
    basket.insert({"Kiwi", 34});
    basket.insert({"JackFruit", 12});
    basket.insert({"Apple", 42});

    for (const auto& [name, quantity] : basket){
        cout << name << " : " << quantity << endl;
    }
    cout << endl;
    // Accessing specific element 
    string fruit = "Apple";
    if(basket.contains(fruit)){
        cout << "Fruit existed" << endl;
    }else{
        cout << "Not Existed" << endl;
    }
}

int main(){
    UnOrderedMap();
    return 0;
}
























