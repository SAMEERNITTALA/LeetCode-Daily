class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        vector<bool> used(nums.size(), false);
        backtrack(nums, current, used, ans);
        return ans;
    }

private:
    void backtrack(vector<int> &nums, vector<int> &current, vector<bool> &used, vector<vector<int>> &ans){
        if(current.size() == nums.size())
        {
            ans.emplace_back(current);
            return;
        }

        for(int i = 0; i < nums.size(); i++)
        {
            if(used[i]) continue;

            current.emplace_back(nums[i]);
            used[i] = true;

            backtrack(nums, current, used, ans);

            current.pop_back();
            used[i] = false;
        }
    }
};