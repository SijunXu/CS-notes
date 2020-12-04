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

// template functions
// note: use "&" reference to vector
template<typename T> void insertion_sort_vec(vector<T>& arr, int n){
    for (int i=1; i<n; i++){
        T key;
	int j;
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j -= 1;    
        }
        arr[j+1] = key;
    }
}

// binary search using iterator 
template<typename T> int binary_search(vector<T> arr, T target){
  auto beg = arr.begin();
  auto end = arr.end();
  auto mid = beg + (end - beg) / 2;
  while (mid != end && *mid != target){
    if (target < *mid)
      end = mid;
    else
      beg = mid + 1;
    mid = beg + (end - beg) / 2;
  }
  if (*mid == target)
    return mid - arr.begin();
  else
    cout << "element not found!" <<endl;
    return -1;
}

int main(){
  // unsigned int n = 6;
  // int arr[n] = {54, 2, 2, 65, 8, 3};
  // vector<int> arr = {54, 2, 2, 65, 8, 3};
  vector<int> arr;
  int a;
  while(cin >> a)
    arr.push_back(a);
  int n = arr.size();
  insertion_sort_vec(arr, n);
  // for (auto &i: arr){
  //   i *= i;
  // }
  // for (auto i: arr){
  //   cout << i << " ";
  // }
  // using iterator to print elements in arr
  cout << endl;
  for (auto it=arr.begin(); it!=arr.end(); ++it)
    cout << *it << " ";
  cout << endl;

  // binary search an element
  int b = 12;
  // cout << "input an integer: " << endl;    
  // cin >> b;
  auto beg = arr.begin();
  int index = binary_search(arr, b);
  if (index != -1)
    cout << index << endl;  
  return 0;
}
