class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(char c : s) 
        {
            if(!isdigit(c)) st.push(c);
            else st.pop();
        }
        string ans = "";
        while(!st.empty()) 
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
