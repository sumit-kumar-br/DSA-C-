#include <iostream>
using namespace std;

int peakEle(int arr[], int n) {
  int s = 0, e= n-1;
  while(s<e) {
    int mid = s + (e-s)/2;
    if(arr[mid] < arr[mid+1]) {
      s = mid+1;
    }
    else{
      e=mid;
    }
  }
  return s;
}

int main() {
  int arr[7] = {2,5,7,8,5,4,3};
  cout << "Peak element is at index " << peakEle(arr, 7) << endl;
}