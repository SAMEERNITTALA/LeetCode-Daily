class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int count = 0, x = nums[i];
            while(x > 0)
            {
                x = x / 10;
                count++;
            }
            ans += count % 2 == 0 ? 1 : 0;
        }
        return ans;
    }
};