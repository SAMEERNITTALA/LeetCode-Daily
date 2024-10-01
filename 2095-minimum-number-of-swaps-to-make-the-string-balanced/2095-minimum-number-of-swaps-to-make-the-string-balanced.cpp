class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        for(char c : s)
        {
            if(c == '[') st.push(c);

            else if(c == ']')
            {
                if(!st.empty() && st.top() == '[') st.pop();

                else st.push(c);
            }
        }

        return (st.size() / 2 + 1) / 2; 
    }
};