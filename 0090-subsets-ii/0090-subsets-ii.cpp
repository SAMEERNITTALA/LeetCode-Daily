class Solution {
public:
    vector<vector<int>> f(int ind, vector<int>& v, vector<int>& nums, int n) {
        if(ind == n) return {v};

        // Include nums[ind]
        v.emplace_back(nums[ind]);
        vector<vector<int>> left = f(ind + 1, v, nums, n);
        v.pop_back();

        // Exclude nums[ind] and skip all duplicates
        int nextInd = ind + 1;
        while(nextInd < n && nums[nextInd] == nums[ind]) {
            nextInd++;
        }
        vector<vector<int>> right = f(nextInd, v, nums, n);

        // Combine both subsets
        left.insert(left.end(), right.begin(), right.end());
        return left;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // important for skipping duplicates
        vector<int> v;
        return f(0, v, nums, nums.size());
    }
};
