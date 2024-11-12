class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        for(int i = 0; i < 1 << n; i++)
        {
            vector<int> ans;
            for(int j = 0; j < n; j++)
            {
                if((1 << j) & i) ans.emplace_back(nums[j]);
            }
            v.emplace_back(ans);
        }
        return v;
    }
};