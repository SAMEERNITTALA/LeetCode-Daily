class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = -1;
        int low = 0, high = n - 1;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            
            if(nums[mid] == target) return mid;

            if(nums[mid] < target)
            {
                ans = mid;
                low = mid + 1;
            }  
            else high = mid - 1;
        }
        return ans + 1;
    }
};