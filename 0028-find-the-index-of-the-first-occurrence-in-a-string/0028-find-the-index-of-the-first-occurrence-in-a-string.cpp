class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() > haystack.size()) return -1;
        vector<string> sub;
        for(int i = 0; i <= haystack.size() - needle.size(); i++)
        {
            sub.push_back(haystack.substr(i, needle.size()));
        }
        int ans = 0;
        for(int i = 0; i < sub.size(); i++)
        {
            if(sub[i] == needle){
                ans = i;
                break;
            } 
            else ans = -1;
        }
        return ans;
    }
};
