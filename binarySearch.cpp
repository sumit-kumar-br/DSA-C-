#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
  int start = 0;
  int end = size-1;
//  int mid = (start+end)/2;
//  in this case, a condition can arise where start and end are large such that there sum exceeds integer range
  int mid = start + (end-start)/2;
  while(start <= end) {
    if(arr[mid] == key) {
      return mid;
    }

    if(key > arr[mid]) {
      start = mid+1;
    }

    else {
      end = mid-1;
    }

    mid = start + (end-start)/2;

  }
}
int main() {
  int even[6] = {2, 4, 6, 8, 12, 18};
  int odd[5] = {3, 8, 11, 14, 16};

  int evenIndex = binarySearch(even, 6, 12);
  cout << "Index of 12 is " << evenIndex << endl;
}

/*
N -> N/2 -> N/4 -> N/8 -> N/16 ->......
N/2^k = 1
N = 2^k
k = log N
O(log N)
*/