class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans(nums.size(), 0);
        int k = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < pivot)
            {
                ans[k] = nums[i];
                k++;
            }
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == pivot)
            {
                ans[k] = nums[i];
                k++;
            }
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > pivot)
            {
                ans[k] = nums[i];
                k++;
            }
        }
        return ans;
    }
};