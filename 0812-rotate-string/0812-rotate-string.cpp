class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;

        string combined = s + s;
        return combined.find(goal) != string::npos;
    }
};
