class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v;
        
        for(int i = 0; i <= n - k; i++) 
        { 
            int count = 0;
            bool consecutive = true;
            
            for(int j = i + 1; j < i + k; j++) 
            {
                if(nums[j] == nums[j - 1] + 1) count++;
                else 
                {
                    consecutive = false;
                    break;
                }
            }
            if(consecutive && count == k - 1) v.emplace_back(nums[i + k - 1]);
            else v.emplace_back(-1);
        }
        
        return v;
    }
};
