class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(count == 0)
            {
                count = 1;
                ele = nums[i];
            }
            else if(nums[i] == ele) count++;
            else count--;
        }
        int val = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == ele) val++;
        }
        return (val > nums.size() / 2) ? ele : -1;
    }
};