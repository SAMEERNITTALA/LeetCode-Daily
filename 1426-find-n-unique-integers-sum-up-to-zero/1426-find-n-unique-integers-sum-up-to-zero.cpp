class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        if(n & 1) v.emplace_back(0);
        n = n / 2;
        while(n > 0)
        {
            v.emplace_back(n);
            v.emplace_back(-n);
            n--;
        }
        return v;
    }
};