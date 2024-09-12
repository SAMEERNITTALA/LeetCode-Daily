class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        set<char> s1;
        for(char c : allowed) s1.insert(c);
        for(int i = 0; i < words.size(); i++)
        {
            int val = 0;
            
            set<char> s2;
            for(char c : words[i]) s2.insert(c);

            for(char d : s2) if(s1.find(d) != s1.end()) val++;

            if(val == s2.size()) count++;
        }
        return count;
    }
};