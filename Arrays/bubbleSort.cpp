/*
array:   10 1 7 6 14 9
round 1:
10 1 7 6 14 9 
1 10 7 6 14 9
1 7 10 6 14 9
1 7 6 10 14 9
1 7 6 10 9 14
after round 1: 1 7 6 10 9 14

nth round: nth largest no will be placed in its right position

Total rounds = n-1 (maximum)
*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> bubbleSort(vector<int>& arr, int n) {
  for(int i=0; i<n-1; i++) {
    bool swapped = false;
    for(int j = 0; j<n-1-i; j++) {
      if(arr[j] > arr[j+1]) {
        swap(arr[j], arr[j+1]);
        swapped = true;
      }
    }
    if(swapped == false) {
      // alreday sorted
      break;
    }
  }
  /* same thing as above
  for(int i=1; i<n; i++) {
    for(int j = 0; j<n-i; j++) {
      if(arr[j] > arr[j+1]) {
        swap(arr[j], arr[j+1]);
      }
    }
  }
  */
  return arr;
}

int main() {
  vector<int> arr = {10, 1, 7, 6, 14, 9};
  int n = arr.size();
  arr = bubbleSort(arr, n);
  cout << "Sorted array : " << endl;
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
/*
Space complexity = O(1) since we have only used some variables

Round 1 = n-1 comparisons
Round 2 = n-2 comparisons
Round 3 = n-3 comparisons
........
Round (n-1) = 1 compariosn
1+2+3... + (n-1) = n(n-1)/2 = (n^2-n)/2
So, time complexity = O(n^2)
best case = already sorted
worst case = reverse sorted

to optimize the code, we check if there ar eany swaps in a round, 
if there are none, use break

so best case = O(n)
worst case = O(n^2)

Bubble Sort is a stable sorting algorithm because it does not change the relative order of equal elements

Bubble Sort is an in-place sorting algorithm because 
it sorts the array without using any extra space other than a few variables. 
It swaps the elements directly within the input array.
*/