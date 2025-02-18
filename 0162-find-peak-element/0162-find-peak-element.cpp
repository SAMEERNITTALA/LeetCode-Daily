class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        if(n == 2) return nums[0] > nums[1] ? 0 : 1;
        int low = 1, high = n - 2;
        while(low <= high)
        {
            int mid = (low + high) / 2;

            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) return mid;

            if(nums[mid] < nums[mid + 1]) 
            {
                low = mid + 1;
                if(mid + 1 == n - 1) return n - 1;
            }
            else 
            {
                high = mid - 1;
                if(mid - 1 == 0) return 0;
            }    
        }
        return -1;
    }
};