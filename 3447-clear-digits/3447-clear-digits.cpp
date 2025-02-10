class Solution {
public:
    string clearDigits(string s) {
        deque<char> q;
        
        for (char c : s) {
            if (!isdigit(c)) 
                q.push_back(c);
            else if (!q.empty()) // Prevents pop_back() on an empty deque
                q.pop_back();
        }

        string ans = "";
        while (!q.empty()) {
            ans += q.front(); // Maintain correct order
            q.pop_front();
        }
        return ans;
    }
};
