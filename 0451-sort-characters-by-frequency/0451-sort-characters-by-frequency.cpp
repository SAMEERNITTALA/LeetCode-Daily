class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for(char c : s) m[c]++;

        priority_queue<pair<int, char>> pq;
        for(auto& p : m) pq.push({p.second, p.first});

        string ans = "";
        while(!pq.empty())
        {
            auto [count, ch] = pq.top();
            pq.pop();
            ans += string(count, ch);
        }

        return ans;
    }
};