#include <iostream>
#include <climits>

using namespace std;

int main(){
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof (arr)/sizeof (arr[0]) ;
  int max = INT_MAX;
  int min = INT_MIN;
  int max_index = 0;
  int min_index = 0;

  for(int i = 0; i<n; i++){
    if(arr[i]<max){
        max = arr[i];
        min_index = i;
    }
    if(arr[i]>min){
        min = arr[i];
        max_index = i;
    }
}
 
  
  cout << "The smallest value is " << max <<" And its Index is " << min_index << endl;
  cout << "The Biggest Value is " << min << " And its Index is " << max_index << endl;
  
  return 0;
}

