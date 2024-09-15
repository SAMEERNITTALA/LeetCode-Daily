class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto it = max_element(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == *it) continue;
            
            if(*it < 2 * nums[i]) return -1;
        }

        return distance(nums.begin(), it);
    }
};