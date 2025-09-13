class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> v(26, 0);
        for(int i = 0; i < s.size(); i++) v[s[i] - 'a']++;
        vector<int> vow = {v[0], v[4], v[8], v[14], v[20]};
        v[0] = v[4] = v[8] = v[14] = v[20] = 0;
        sort(vow.begin(), vow.end(), greater<int>());
        sort(v.begin(), v.end(), greater<int>());
        return v[0] + vow[0];
    }
};