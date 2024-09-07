class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a == b) return -1;
        int count = a.size() > b.size() ? a.size() : b.size();
        return count;
    }
};
