class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        int third = INT_MIN;
        stack<int> st;

        // Traverse the array from right to left
        for (int i = n - 1; i >= 0; --i) {
            // If we find a valid 132 pattern
            if (nums[i] < third) return true;

            // Pop elements from the stack to find a valid 'third' element
            while (!st.empty() && nums[i] > st.top()) {
                third = st.top();
                st.pop();
            }

            // Push current element to stack
            st.push(nums[i]);
        }

        return false;
    }
};