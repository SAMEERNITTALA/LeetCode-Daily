class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int m = 0;
        for(int i = 1; i < n; i++)
        {
            if(nums[i] < nums[i-1])
            {
                m = i;
                break;
            }
        }
        reverse(nums.begin(), nums.begin() + m);
        reverse(nums.begin() + m, nums.end());
        reverse(nums.begin(), nums.end());
        return is_sorted(nums.begin(), nums.end());
    }
};