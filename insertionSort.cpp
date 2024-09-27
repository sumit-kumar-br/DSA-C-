/*
arr:-   10 1 7 4 8 2 11
round 1:-  1<10 -> left of 10
10 shift one place right
0th index pe 1 aa gya
after round 1:-  1 10 7 4 8 2 11
round 2:- 7<10 -> left of 10
7>1 -> right of 1
after round 2:-   1 7 10 4 8 2 11 
after round 3:-   1 4 7 10 8 2 11 
after round 4:-   1 4 7 8 10 2 11 
after round 5:-   1 2 4 7 8 10 11 
after round 6:-   1 2 4 7 8 10 11 

no. of rounds = n-1
*/

#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int>& arr, int n) {
  for(int i=0; i<n; i++) {
    cout << arr[i] << " " ;
  }
}

void insertionSort(vector<int> &arr,int n) {
  for(int i=1; i<n; i++) {
    int temp = arr[i];
    int j= i-1;
    for(; j>=0; j--) {
      if(arr[j] > temp) {
        // shift
        arr[j+1] = arr[j];
      }
      else {
        break; // ruk jao
      }
    }
    arr[j+1] = temp;
    cout << "Array after round " << i << ": " ;
    printArray(arr, n); 
    cout << endl;
  }
}

int main() {
  vector<int> arr = {10, 1, 7, 4, 8, 2, 11};
  int n = arr.size();
  insertionSort(arr ,n);
  
  cout << endl;
}

/*
- Adaptable (there were full comparisons in previous versions)
- stable algorithm
- very good performance for small n

space complexity = O(1) (we only made some new variable)
round -> no. of max comparisons
1     1
2     2
3     3
......
      (n-1)
so, time complexity = O(n^2)
Best case(already sorted) = O(n)
World case(reverse sorted) = O(n^2)
*/