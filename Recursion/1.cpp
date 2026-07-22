#include <map>
// Recursion : When a Fuction calls itself untill the required condition is met.

// -- REAL LIFE USECASES --
// 1. Minecraft's Infinite World Generation (Fractals)
// The Real-Life Scenario: You are walking in Minecraft, and the game constantly builds new mountains, caves, and rivers forever without lagging or running out of space.
// The Computer Science Reality: The game uses Recursive Noise Functions to generate terrain. Instead of saving a massive 3D map file, the code uses a mathematical rule that repeats itself at smaller and smaller scales (a fractal). 
// A mountain shape is recursively shrunk to make hills, which are recursively shrunk to make rocks.

// 2. Peeling an Onion: You peel off one outer layer, which leaves you with a smaller onion-like structure, and you repeat the action until no layers are left

// 3. Rendering Nested Comments: On social media apps, a main post has comments, and those comments can have replies (child comments), which can have more replies. The display code calls itself to indent and render each level.

// 4. The "Three-Way" Mirror: Standing between two parallel mirrors creates an endless tunnel of smaller and smaller reflections of yourself.

#include <iostream>
#include <algorithm>
using namespace std;

// void f(){
//     cout << "Infinity LOOP" << endl;
//     f();
// }

// int main(){
//     f();
//     return 0;
// }

// SO basically this is a infinite loop but still when we run it it stops at a certain point why ??
// The answer is simple basically when these functions is runned then internally they got assigned a mermory and a structure the structure is Stack that follows LIFO and when we run this function void f() assigned in stack that i needs to run then again at 2nd place void f reassigned coz that function calls itself, same process goes like this 2, 3, 4, 5,..... Upto memro capacity of Stack and when stack memory is filled it stops the execution automatically thats is calles "STACK OVERFLOW or SEGMENTATION"


// Ques : why we assign Stack in it ? 
// Ans : coz STACK folloes LIFO so we need a proper order that which function needs to run first and stack do this job perfectly coz LIFO runs function a/c to their occurance newest functions runs first then older newest > new > old > older > oldest this is the order Stack follows and we need this coz we always wants that the main functions terminats at very last and when we run this code main is the first one that execute thats why if it is first one it means it is the oldest and Stack runs oldest at very last 

// the order is like this main run AND main is the newest but here is a func call also name f() so now the newset function is f so stack runs newest one then inside f there is another f call now the newest is f(1) and this is going infinitly until stack overflow.


int cnt= 0;
void recurs(){
   if(cnt> 5) return;
   cout << cnt << endl;
   cnt++;
   recurs();
}
int main(){
    recurs();
    return 0;
}
// Here a condition is given that breaks the infinite loop or recursion after a certain iterations thats called BAse Condition--

// Recursion Tree

