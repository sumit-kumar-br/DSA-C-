/*
Selection sort -
- Many rounds
- In each round, smallest value goes to the 0th index in first round, 1st index in 2nd round and so on...
- eg:-  	        64 25 12 22 11
  after round 1:- 11 25 12 22 64
  after round 2:- 11 12 25 22 64
  after round 3:- 11 12 22 25 64
  after round 4:- 11 12 22 25 64
- total no. of elements = n
  total rounds needed = n-1 (maximum)
*/

#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>& arr, int n) {
  for(int i=0; i<n; i++) {
    cout << arr[i] << " " ;
  }
}
void selectionSort(vector<int>& arr, int n) {
  for(int i=0; i<n-1; i++) {
    int minIndex = i;
    for(int j=i+1; j<n; j++) {
      if(arr[j] < arr[minIndex])
        minIndex = j;
    }
    swap(arr[i], arr[minIndex]);
    cout << "Array after round " << i+1 << ": " ;
    printArray(arr, n); 
    cout << endl;
  }
}

int main() {
  vector<int> arr = {64, 25, 12, 22, 11};
  int n = arr.size();
  selectionSort(arr ,n);
  
  cout << endl;
}

/*
Since, we have only made some new variables,
Space complexity = O(1)

a b c d e - 4 comparisons       n-1
          - 3 comparisons       n-2
          ....                  ......
          - 1 comparison        1
1+2+3+.......+(n-2) + (n-1) = n(n-1)/2 = (n^2-n)/2
So, time complexity = O(n^2)
    best case = worst case = O(n^2)

Use Case:
- Array of small size

Selection sort is generally not considered a stable sorting algorithm 
because it may change the relative order of equal elements.
*/