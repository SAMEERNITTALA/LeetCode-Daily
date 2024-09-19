class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        stack<string> st;
        int count = 0;

        while(ss >> word)
        {
            st.push(word);
            count++;
        }

        string ans = "";
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
            count--;
            if(count > 0) ans += ' ';
        }
        return ans;
    }
};