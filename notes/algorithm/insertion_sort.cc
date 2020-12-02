#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(int arr[], int n){
    for (int i=1; i<n; i++){
        int key, j;
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j -= 1;    
        }
        arr[j+1] = key;
    }
}

int main(){
  unsigned n = 6;
  int arr[n] = {54, 2, 2, 65, 8, 3};
  for (int i=0; i<n; i++)
    cout << arr[i] << "\t";
  cout << endl;

  insertion_sort(arr, n);
  
  for (int i=0; i<n; i++)
    cout << arr[i] << "\t";
  cout << endl;  

  return 0;
}
