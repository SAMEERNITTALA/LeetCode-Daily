class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        int i = 0;

        while(i < nums.size())
        {
            int a = nums[i];
            int b = a;

            while(i+1 < nums.size() && nums[i+1] == nums[i] + 1)
            {
                i++;
                b = nums[i];
            }

            if(a != b) v.emplace_back(to_string(a) + "->" + to_string(b));
            else v.emplace_back(to_string(a));
            i++;
        }

        return v;
    }
};