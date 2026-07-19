// also we can add duplicate Keys with all pairs automatically sorted by key --*****

// 1. Search Engine Indexing (The "Keyword to Pages" Pattern) Search engines like Google use an "inverted index" built on a multimap to deliver search results. A single word appears on millions of different websites.
// Key: A single search term (e.g., "coding").
// Value: A webpage URL containing that word.

//  2. Social Media Feeds (The "User to Posts" Pattern) Platforms like Instagram or X (Twitter) use multimaps to organize timelines and hashtags.
// Key: A User ID or a Hashtag (e.g., #tech).
// Value: A Post ID (photo, video, or tweet).

//  3. E-Commerce Filters (The "Category to Products" Pattern) When browsing retail sites, multimaps handle the behind-the-scenes logic for categories and product tags.
// Key: A product attribute or category (e.g., "Shoes", "Size 10", or "Nike").
// Value: A specific Product ID.Why it's essential: When a user clicks the "Shoes" filter, the system queries the multimap key "Shoes" and instantly retrieves an array of every shoe product ID in the inventory.

#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;

void MultiMap(){
multimap <string, int> scores;
scores.insert({"Alice", 90});
scores.insert({"Alice", 87});
scores.insert({"Jack", 76});
scores.insert({"Jack", 92});
scores.insert({"Dennies", 87 });
scores.insert({"trevor",100 });

// Accessing the multimap --
for(const auto& [name, score] : scores){
    cout << name << " : " << score << endl;
}
cout << endl;
// Accessing only for alice iteration

auto range = scores.equal_range("Alice");
//  Finding the Boundaries (equal_range)

// Because a std::multimap sorts its keys automatically, all elements with the key "John" are grouped tightly together in memory.equal_range("Alice") asks the multimap: "Give me the exact starting and ending boundaries where 'Alice' lives.

// "It returns a std::pair containing two pointers (iterators):range.first: Points to the very first occurrence of "Alice" (the "90").range.second: Points to the element just after the last "Alice" (the next unique person in the map, or the end of the map).


cout << "All alice Marks : \n" << endl;
for (auto it = range.first; it != range.second; ++it){
    cout << it->first << " : " << it->second << endl;
}
// This is a standard pointer-based loop tailored to the boundaries we just found:
// auto it = range.first: Start the loop iterator (it) at the first "John".
// it != range.second: Keep looping as long as we haven't crossed the ending boundary.
// ++it: Move to the next element in the map.



}

int main(){
    MultiMap();
    return 0;

    // the -> operator 
    // The -> operator in C++ is called the Arrow Operator (or Member Selection Operator).
    // It is a shorthand way to do two things at once: dereference a pointer and access a member (like a variable or function) inside an object.
    // The Problem it SolvesWhen you use a loop with iterators (like auto it), the variable it is not the actual object—it is a pointer/iterator pointing to the object.
    // If you want to get the data inside, the long way to write it is:(*it).second (Parentheses are required because the dot operator has higher priority than the asterisk).
    // Because writing (*it). is ugly and tedious, C++ created the shortcut:it->second
    // Side-by-Side Comparison Both of these lines do the exact same thing under the hood:

    // The Long Way (Manual Dereference)  |   The Short Way (Arrow Operator)

    // std::cout << (*it).second;         |    std::cout << it->second;
}
