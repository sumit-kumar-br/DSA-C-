#include <iostream>
using namespace  std;

int firstOccur(int arr[], int n, int key) {
  int start = 0, end = n-1;
  int mid = start + (end-start)/2;
  int ans = -1;
  while(start<=end) {
    if(key == arr[mid]) {
      ans = mid;
      end = mid-1;
    }
    else if(key < arr[mid]) {
      end = mid-1;
    }
    else {
      start = mid+1;
    }
    mid = start + (end-start)/2;
  }
  return ans;
}

int lastOccur(int arr[], int n, int key) {
  int start = 0, end = n-1;
  int mid = start + (end-start)/2;
  int ans = -1;
  while(start < end) {
    if(key == arr[mid]) {
      ans = mid;
      start = mid + 1;
    }
    else if(key < arr[mid]) {
      end = mid-1;
    }
    else {
      start = mid+1;
    }
    mid = start + (end-start)/2;
  }
  return ans;
}

int main() {
  int arr[10] = {1, 2, 3, 3, 3, 3, 4, 5, 6, 7};
  cout << "First Occurence of 3 is " << firstOccur(arr, 10 , 3) << endl;
  cout << "Last Occurence of 3 is " << lastOccur(arr, 10 , 3) << endl;
  cout << "Toal Occurence of 3 is " << lastOccur(arr, 10 , 3)-firstOccur(arr, 10 , 3)+1<< endl;
}