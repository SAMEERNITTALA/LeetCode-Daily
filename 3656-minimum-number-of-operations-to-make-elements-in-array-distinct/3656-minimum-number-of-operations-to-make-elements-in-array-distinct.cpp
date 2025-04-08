class Solution {
public:
    bool compare(vector<int>& v) {
        unordered_map<int, int> m;
        for(int n : v) m[n]++;
        return m.size() == v.size();
    }

    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i+= 3)
        {
            /*if(nums.size() - i >= 3)
            {
                vector<int> v(nums.begin() + i, nums.end());
                if(compare(v)) return ans;
                else ans += 1;

            }
            else return ans + 1;*/
            vector<int> v(nums.begin() + i, nums.end());
            ans += int(!compare(v));
        }
        //return -1;
        return ans;
    }
};