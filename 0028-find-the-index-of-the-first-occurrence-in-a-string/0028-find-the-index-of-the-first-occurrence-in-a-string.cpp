class Solution {
public:
    int strStr(const string& haystack, const string& needle) 
    {
        if (needle.empty()) return 0;
        if (needle.size() > haystack.size()) return -1;
        for (int i = 0; i <= haystack.size() - needle.size(); ++i) 
        {
            if (haystack.substr(i, needle.size()) == needle) return i;
        }
        return -1;
    }
};
