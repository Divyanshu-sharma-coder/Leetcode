#include <set>
// Sets -: (Ordered set)

// A set is a container that stored Unique element in sorted order (Ascending by default) using a balanced BST (Red Black Tree)
// 1. Digital Content Moderation (Blacklisting / Whitelisting)
// The Scenario: Live chat systems (like Twitch or Discord) must scan incoming messages against a dictionary of thousands of banned words or blocked IP addresses in real time.
// Why std::set is best: It keeps the forbidden words sorted alphabetically. This structure allows the system to look up any word in \(O(\log n)\) time using binary search. If a message contains a banned word, it is blocked instantly without lagging the chat server.

// 2. Network Router Range Queries (lower_bound / upper_bound)
// The Scenario: Internet routers manage massive routing tables. When a data packet arrives with an IP address, the router needs to quickly find the closest matching network prefix or IP range to forward the packet.
// Why std::set is best: Unlike hash tables (std::unordered_set), which can only look up exact matches, std::set preserves order. This allows you to use functions like .lower_bound() or .upper_bound() to instantly find the nearest element or a range of values rather than just a single key.

// 3. Print Queue or Event Scheduling (Unique Priority Tasks)
// The Scenario: An operating system or a print server tracks upcoming cron jobs, scheduled tasks, or print requests. Each task has a unique timestamp or priority level.
// Why std::set is best: Tasks can be inserted at any random time, but the set will automatically shuffle them into chronological or priority order. The system can constantly grab the very first element (*my_set.begin()) to execute the earliest task, while guaranteeing no duplicate tasks are scheduled.

#include <iostream>
using namespcae std;
void Set(){
    set <int>
}