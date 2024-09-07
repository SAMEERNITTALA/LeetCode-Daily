class Solution {
private:
    bool isRotatedSorted(vector<int> &nums) 
    {
        int count = 0;
        for(int i = 0; i < nums.size()-1; i++) 
        {
            if(nums[i] > nums[i+1]) count++;
        }
        if(count == 0||(count == 1 && nums[0] > nums[nums.size()-1])) return true;
        return false;
    }
public:
    int minimumRightShifts(vector<int>& nums) 
    {
        bool check=isRotatedSorted(nums);
        if(check==false) return -1;
        int n = nums.size(), ans=0;
        for(int i=n-1; i>0; i--) 
        {
            if(nums[i]<nums[0]) ans++;
            else break;
        }
        return ans;
    }
};
