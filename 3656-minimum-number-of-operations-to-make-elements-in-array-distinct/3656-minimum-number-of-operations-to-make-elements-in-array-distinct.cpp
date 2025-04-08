class Solution {
public:
    /*bool compare(vector<int>& v) {
        unordered_map<int, int> m;
        for(int n : v) m[n]++;
        return m.size() == v.size();
    }*/

    int minimumOperations(vector<int>& nums) {
        /*int ans = 0;
        for(int i = 0; i < nums.size(); i+= 3)
        {
            vector<int> v(nums.begin() + i, nums.end());
            ans += int(!compare(v));
        }
        return ans;*/
        int n = nums.size(), i = 0, ans = 0;
        while(i < n)
        {
            unordered_set<int> s;
            bool hasDuplicate = false;
            for(int j = i; j < n; j++)
            {
                if(s.count(nums[j]))
                {
                    hasDuplicate = true;
                    break;
                }
                s.insert(nums[j]);
            }
            if(!hasDuplicate) break;

            i += 3;
            ans++; 
        }

        return ans;
    }
};