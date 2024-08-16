class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '('){
                st.push(s[i]);
                count++;
            }
            else if(st.empty() && s[i] == ')') count++;
            else if(st.top() == '(' && s[i] == ')'){
                st.pop();
                count--;
            }
        }
        return count;
    }
};