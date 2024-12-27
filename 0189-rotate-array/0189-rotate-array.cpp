class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        /*reverse(nums.begin(), nums.begin() + n - k); 
        reverse(nums.begin() + n - k, nums.end());   
        reverse(nums.begin(), nums.end());*/
        vector<int> temp;
        for(int i = n-k; i < n; i++) temp.emplace_back(nums[i]);
        for(int i = n-k-1; i >= 0; i--)
        {
            nums[i+k] = nums[i];
        }
        for(int i = 0; i < k; i++) nums[i] = temp[i];          
    }
};
