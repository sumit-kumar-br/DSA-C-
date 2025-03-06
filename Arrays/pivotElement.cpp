#include<iostream>
using namespace std;

int pivotEle(int arr[], int n) {
  int s = 0, e = n-1;
  while(s<e) {
    int mid = s + (e-s)/2;
    if(arr[mid]>=arr[0]){
      s = mid+1;
    }
    else {
      e = mid;
    }
  }
  return s; //  return e is same as well
}

int main() {
  int arr[6] = {8,9,2,3,4,6};
  cout << "Pivot Element is at index " << pivotEle(arr, 6) << endl; 
}