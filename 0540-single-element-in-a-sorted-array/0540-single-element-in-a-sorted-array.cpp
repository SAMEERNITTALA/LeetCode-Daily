class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        int low = 1, high = nums.size() - 2;
        while(low <= high)
        {
            int mid = (low + high) / 2;

            if(nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1]) return nums[mid];

            if(nums[mid] == nums[mid - 1]) 
            {
                if(mid % 2 == 1) low = mid + 1;
                else high = mid - 1;
            }

            if(nums[mid] == nums[mid + 1])
            {
                if(mid % 2 == 1) high = mid - 1;
                else low = mid + 1;
            }    
        }
        return -1;
    }
};