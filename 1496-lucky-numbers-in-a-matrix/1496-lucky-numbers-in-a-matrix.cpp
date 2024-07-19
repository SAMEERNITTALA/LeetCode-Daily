#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findCommonElements(const vector<int>& arr1, const vector<int>& arr2) {
        unordered_set<int> set(arr1.begin(), arr1.end());
        vector<int> result;
        
        for (int num : arr2) {
            if (set.count(num)) {
                result.push_back(num);
                set.erase(num); // To ensure uniqueness
            }
        }
        
        return result;
    }

    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int l = matrix.size();
        int m = matrix[0].size();
        vector<int> ans1, ans2;

        for (int i = 0; i < l; ++i) {
            int min_value = *min_element(matrix[i].begin(), matrix[i].end());
            ans1.push_back(min_value);
        }

        for (int j = 0; j < m; ++j) {
            int max_value = matrix[0][j];
            for (int i = 1; i < l; ++i) {
                max_value = max(max_value, matrix[i][j]);
            }
            ans2.push_back(max_value);
        }

        vector<int> commonElements = findCommonElements(ans1, ans2);
        return commonElements; // Return the vector of common elements
    }
};
