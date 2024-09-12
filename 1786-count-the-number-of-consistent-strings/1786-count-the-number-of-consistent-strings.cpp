class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        set<char> s1;
        for(char c : allowed) s1.insert(c);
        for(int i = 0; i < words.size(); i++)
        {
            int val = 0;
            for(int j = 0; j < words[i].size(); j++)
            {
                if(s1.find(words[i][j]) != s1.end()) val++;
            }
            if(val == words[i].size()) count++;
        }
        return count;
    }
};