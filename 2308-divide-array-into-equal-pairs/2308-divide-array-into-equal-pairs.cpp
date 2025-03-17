class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> m;
        for(int n : nums) m[n]++;
        for(const auto& pair : m)
        {
            if(pair.second % 2 == 0) count += pair.second;
            else break;
        }
        return count == nums.size(); 
    }
};