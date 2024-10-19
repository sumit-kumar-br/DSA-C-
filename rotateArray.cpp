#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k) {
  int n = nums.size();
  vector<int> num1 = nums;
  for (int i = 0; i < n; i++) {
    nums[(i + k) % n] = num1[i];
  }
}

void printArray(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> arr = {64, 25, 12, 22, 11};
  int k = 2;
  rotate(arr ,k);
  printArray(arr);
}