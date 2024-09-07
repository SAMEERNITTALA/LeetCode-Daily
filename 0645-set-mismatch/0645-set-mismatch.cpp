class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> result(2); 

        for (int n : nums) m[n]++;

        for (int i = 1; i <= nums.size(); i++) 
        {
            if (m[i] == 2) 
            {
                result[0] = i;
            } 
            else if (m[i] == 0) 
            {
                result[1] = i;
            }
        }

        return result;
    }
};
