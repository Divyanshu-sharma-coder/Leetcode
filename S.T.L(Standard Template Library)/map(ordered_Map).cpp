// Real life usecases

// 1.  User Account Lookups (The "ID to Profile" Pattern)Every modern app uses a map to handle user logins. When you log in, the system uses a map to look up your data instantly.

// 2.  Digital Shopping Carts (The "Counter" Pattern)E-commerce sites use maps to manage what you are buying in real time.
// Key: Product SKU / Item ID.
// Value: Quantity (an integer).

// 3. DNS Resolution (The "Translator" Pattern)This is the backbone of the internet. Computers do not understand words like google.com; they only understand numbers.
// Key: Domain Name (google.com).Value: 
// IP Address (142.250.190.46)

// The key is always unique *******

#include <iostream>
#include <map>
#include <string>

// Also known as HashMap --

using namespace std;
void MAP(){
map <string, int> ageMap = {{"Alice", 21},
{"Bob", 28}
};

// Iterating it 
// 1st modern method --
for(const auto& [name, age] : ageMap){
    cout << name << " : " << age << endl;
}

// 2nd old method 
cout << endl;
for(const auto& pair : ageMap){
    cout << pair.first << " : " << pair.second << endl;
}
cout << endl;
// Functions 
ageMap.insert({"Divyanshu", 19});
ageMap["Honey"] = 16;
ageMap.insert ({"Jack", 192});

// Finding something 
if(ageMap.find("Honey") != ageMap.end()){
    cout << "key Existed" << endl;
}
cout << endl;
for(const auto& [name, age] : ageMap){
    cout << name << " : " << age << endl;
}



}


int main(){
    MAP();
    return 0;
}