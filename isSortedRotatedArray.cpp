#include <iostream>
#include <vector>
using namespace std;

bool isSortedAndRotated(vector<int> &nums)
{
  int c = 0;
  int n = nums.size();
  for (int i = 0; i < n; i++)
  {
    if (nums[i] > nums[(i + 1) % n])
    {
      c++;
    }
  }
  if (c <= 1)
    return true;
  return false;
}

int main() {
  vector<int> arr = {5,6,7,1,2,3,4};
  cout << "Is the array sorted and rotated: " << isSortedAndRotated(arr) << endl;
}