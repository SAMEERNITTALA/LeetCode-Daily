class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> st1, st2;

        for(int i = 0; i < t.size(); i++) {
            st2.push(t[i]);
        }

        for(int i = 0; i < s.size(); i++) {
            st1.push(s[i]);
        }
        
        while(!st1.empty() && !st2.empty()) {
            if(st1.top() == st2.top()) {
                st1.pop();  
            }
            st2.pop();  
        }

        return st1.empty();
    }
};
