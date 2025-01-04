class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> first(26, -1), last(26, -1);
        for(int i = 0; i < s.size(); i++)
        {
            if(first[s[i] - 'a'] == -1)
            {
                first[s[i] - 'a'] = i;
            }
            last[s[i] - 'a'] = i;
        }
        int count = 0;
        for(char c = 'a'; c <= 'z'; c++)
        {
            int start = first[c - 'a'];
            int end = last[c - 'a'];
            if(start != -1 && end != -1 && end - start > 1)
            {
                unordered_set<char> uniqueChars;
                for(int i = start + 1; i < end; i++)
                {
                    uniqueChars.insert(s[i]);
                }
                count += uniqueChars.size();
            }
        } 
        return count;
    }
};