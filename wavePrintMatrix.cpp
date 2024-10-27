#include <iostream>
#include <vector>
using  namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int col=0; col < mCols; col++) {
        if(col%2 == 0) {
            for(int row=0; row < nRows; row++) {
                ans.push_back(arr[row][col]);
            }
        }
        else {
            for(int row=nRows-1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

void printAns(vector<int> &ans) {
  for(int i=0; i<ans.size(); i++) {
    cout << ans[i] << " ";
  }
}
int main() {
  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<int> result = wavePrint(matrix, 3, 3);
  cout << "Spiral print: " << endl;
  printAns(result);
}