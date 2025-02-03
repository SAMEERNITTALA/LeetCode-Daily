class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int brk = -1;
        for(int j = n-2; j >= 0; j--)
        {
            if(nums[j] < nums[j+1])
            {
                brk = j;
                break;
            }
        }
        if(brk == -1) reverse(nums.begin(), nums.end());
        else
        {
            for(int k = n-1; k >= brk; k--)
            {
                if(nums[k] > nums[brk])
                {
                    swap(nums[k], nums[brk]);
                    break;
                }
            }
            reverse(nums.begin() + brk + 1, nums.end());
        }
    }
};