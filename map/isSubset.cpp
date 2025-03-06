#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool checkSubset(vector<int> & arr1, vector<int>& arr2, int n, int m) {
    // Write your code here.
    unordered_map <int, int> freq;
    for(int i=0; i<n; i++) {
        freq[arr1[i]]++;
    }
    for(int i=0; i<m; i++) {
        if(freq[arr2[i]] == 0 ) {
            return false;
        }
        freq[arr2[i]]--;
    }
    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vector<int> arr2 = {0, 2, 4, 6, 11};
    cout << checkSubset(arr1, arr2, 10, 5);
}