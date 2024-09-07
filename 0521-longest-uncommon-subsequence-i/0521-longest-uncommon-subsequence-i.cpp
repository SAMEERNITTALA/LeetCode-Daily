class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a == b) return -1;
        
        // unordered_map<char, int> x;
        // for(auto it : a) x[it]++;
        // unordered_map<char, int> y;
        // for(auto ti : b) y[ti]++;
        int count = a.size() > b.size() ? a.size() : b.size();
        // for (auto it1 = x.begin(), it2 = y.begin(); it1 != x.end() && it2 != y.end(); ++it1, ++it2) 
        // {
        //     if (it1->first != it2->first) count += it1->second;
        // }

        return count;
    }
};