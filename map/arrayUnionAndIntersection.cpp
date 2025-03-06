#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

pair<int, int> findIntersectionAndUnion(vector<int>& arr1, vector<int>& arr2, int n, int m) {
    // Step 1: Store ARR1 elements in an unordered_map
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr1[i]] = 1; // Value is 1 since ARR1 has distinct elements
    }

    // Step 2: Count intersection by checking ARR2 elements
    int intersection = 0;
    for (int i = 0; i < m; i++) {
        if (freq.find(arr2[i]) != freq.end()) {
            intersection++;
        }
    }

    // Step 3: Compute union using formula
    int union_size = n + m - intersection;

    return {intersection, union_size};
}

int main() {
    int t;
    cin >> t; // Number of test cases

    for (int test = 0; test < t; test++) {
        int n, m;
        cin >> n >> m; // Sizes of ARR1 and ARR2

        // Input ARR1
        vector<int> arr1(n);
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }

        // Input ARR2
        vector<int> arr2(m);
        for (int i = 0; i < m; i++) {
            cin >> arr2[i];
        }

        // Get intersection and union sizes
        pair<int, int> result = findIntersectionAndUnion(arr1, arr2, n, m);

        // Output result
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}