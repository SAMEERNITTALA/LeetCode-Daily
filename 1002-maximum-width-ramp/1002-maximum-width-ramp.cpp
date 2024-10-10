class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        vector<int> stack;
        int maxWidth = 0;
        
        // Build a decreasing stack with indices
        for (int i = 0; i < nums.size(); ++i) {
            if (stack.empty() || nums[stack.back()] > nums[i]) {
                stack.push_back(i);
            }
        }
        
        // Traverse backwards to find the maximum width
        for (int j = nums.size() - 1; j >= 0; --j) {
            while (!stack.empty() && nums[stack.back()] <= nums[j]) {
                maxWidth = max(maxWidth, j - stack.back());
                stack.pop_back();
            }
        }
        
        return maxWidth;
    }
};
