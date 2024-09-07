class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1;
        for(int n1 : nums1) m1[n1]++;
        unordered_map<int, int> m2;
        for(int n2 : nums2) m2[n2]++;
        vector<int> v;
        for (const auto& pair1 : m1) 
        {
            for (const auto& pair2 : m2) 
            {
                if (pair1.first == pair2.first) 
                {
                    v.emplace_back(pair1.first);
                }
            }
        }
        return v;
    }
};