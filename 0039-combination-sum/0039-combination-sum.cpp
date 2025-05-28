class Solution {
public:
    void f(int ind, int target, vector<int>& candidates, vector<vector<int>>& ans, vector<int>& v) {
        if(ind == candidates.size()) {
            if(target == 0) ans.emplace_back(v);
            return;
        }

        if(candidates[ind] <= target) {
            v.emplace_back(candidates[ind]);
            f(ind, target - candidates[ind], candidates, ans, v);
            v.pop_back();
        }

        f(ind+1, target, candidates, ans, v);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        f(0, target, candidates, ans, v);
        return ans;
    }
};