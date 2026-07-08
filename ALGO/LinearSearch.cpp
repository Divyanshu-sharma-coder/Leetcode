// we have an array and we need to find a specific number or value in it so we use this algo.
// Time Complexity O(n)

#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int n, int target, int &index, bool &f){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            index = i;
            f = true;
            return true;
        }
    }
    return false;
}

int main(){
  int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  int n = sizeof (arr)/sizeof (arr[0]);
  int target;
  int index = 0;
  bool f = false;
  cout << "Enter the number for searching : ";
  cin >> target;
  cout << endl;
  LinearSearch(arr, n, target, index, f);
  if(f){
    cout << "Founded At index " << index << endl;
  }else{
    cout << "Nott founded" << endl;
  }

  return 0;

}