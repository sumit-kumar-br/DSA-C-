#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    unordered_map <int, int> m;
    vector<int> ans;
    int n = grid.size();
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            m[grid[i][j]]++;
        }
    }
    for(int i=0; i<m.size(); i++) {
        if(m[i] == 2) {
            ans.push_back(m[i]);
        }
    }
    for(int i=0; i<m.size(); i++) {
        if(m[i] == 0) {
            ans.push_back(m[i]);
        }
    }
    return ans;
}