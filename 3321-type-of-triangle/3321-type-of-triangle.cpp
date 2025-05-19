class Solution {
public:
    string triangleType(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i : nums) m[i]++;
        sort(nums.begin(), nums.end());
        if(nums[0] + nums[1] > nums[2])
        {
            if(m.size() == 1) return "equilateral";
            else if(m.size() == 2) return "isosceles";
            else return "scalene";
        }
        return "none";
    }
};