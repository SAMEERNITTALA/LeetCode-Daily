class Solution {
    void comb(int ind,int target,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            if(nums[i]>target)break;
            ds.push_back(nums[i]);
            comb(i+1,target-nums[i],nums,ans,ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        comb(0,target,candidates,ans,ds);
        return ans;
    }
};