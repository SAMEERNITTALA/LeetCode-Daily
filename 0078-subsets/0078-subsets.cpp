class Solution {
public:
    vector<vector<int>> f(int ind, vector<int>& v, vector<int>& nums, int n) {
        if (ind == n) return {v};  // Base case: return current subset
        
        // Include nums[ind]
        v.push_back(nums[ind]);
        vector<vector<int>> left = f(ind + 1, v, nums, n);
        v.pop_back();
        
        // Exclude nums[ind]
        vector<vector<int>> right = f(ind + 1, v, nums, n);
        
        // Combine both
        left.insert(left.end(), right.begin(), right.end());
        return left;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        return f(0, v, nums, n);
    }
};
