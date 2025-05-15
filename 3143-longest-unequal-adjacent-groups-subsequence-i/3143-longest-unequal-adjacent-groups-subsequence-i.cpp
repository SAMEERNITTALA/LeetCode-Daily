class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans;
        ans.emplace_back(words[0]);
        for(int i = 1; i < groups.size(); i++)
        {
            if(groups[i] != groups[i-1]) ans.emplace_back(words[i]);
        }
        return ans;
    }
};