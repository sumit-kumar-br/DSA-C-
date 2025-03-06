#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map <int, int> count;

    int maxFreq = 0;
    int maxAns = 0;

    for(int i=0; i<n; i++) {
        count[arr[i]]++;
        maxFreq = max(maxFreq, count[arr[i]]);
    }

    for(int i=0; i<n; i++) {
        if(maxFreq == count[arr[i]]) {
            return arr[i];
        }
    }
}

int main() {
    vector<int> arr = {2, 4, 5,2, 5, 2, 5,3, 6,3, 2};
    int maxF = maximumFrequency(arr, 11);
    cout << maxF << endl;
}