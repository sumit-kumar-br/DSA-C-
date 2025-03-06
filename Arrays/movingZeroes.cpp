#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums) {
  int nonZero=0;
  for(int j=0; j<nums.size(); j++) {
    if(nums[j]!=0) {
      swap(nums[j], nums[nonZero]);
      nonZero++;
    }
  }
}

void print(vector<int> &nums) {
  for(int i=0; i<nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> arr = {0,2,3,1,0,7,9,0,0};
  moveZeroes(arr);
  print(arr);
}