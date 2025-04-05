class Solution {
public:
    int total = 0;
    
    void dfs(vector<int>& nums, int index, int currentXor) {
        if (index == nums.size()) {
            total += currentXor;
            return;
        }
        
        // Include nums[index]
        dfs(nums, index + 1, currentXor ^ nums[index]);
        
        // Exclude nums[index]
        dfs(nums, index + 1, currentXor);
    }
    
    int subsetXORSum(vector<int>& nums) {
        dfs(nums, 0, 0);
        return total;
    }
};
