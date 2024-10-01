class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findPosition(nums, target, true);
        int last = findPosition(nums, target, false);
        return {first, last};
    }

private:
    int findPosition(vector<int>& nums, int target, bool findFirst) {
        int l = 0, r = nums.size() - 1;
        int pos = -1;

        while(l <= r)
        {
            int mid = l + (r-l) / 2;

            if(nums[mid] == target)
            {
                pos = mid;

                if(findFirst) r = mid - 1;

                else l = mid + 1; 
            }

            else if(nums[mid] < target) l = mid + 1;

            else r = mid - 1;
        }

        return pos;
    }    
};