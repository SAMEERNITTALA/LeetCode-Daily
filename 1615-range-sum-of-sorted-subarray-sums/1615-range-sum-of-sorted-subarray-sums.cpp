class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int MOD = 1e9 + 7;
        vector<int> subsum;
        int ans = 0;
        for(int i = 0; i < n; ++i) {  // Start from 0
            int sum = 0;
            for(int j = i; j < n; ++j) {  // Run until j < n
                sum += nums[j];
                subsum.emplace_back(sum);
            }
        }
        sort(subsum.begin(), subsum.end());
        for(int i = left - 1; i < right; ++i) {  // Adjust to zero-based indexing
            ans = (ans + subsum[i]) % MOD;
        }
        return ans;
    }
};
