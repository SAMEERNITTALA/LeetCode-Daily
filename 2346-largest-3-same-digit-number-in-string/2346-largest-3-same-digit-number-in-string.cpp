class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string> v;
        for(int i = 0; i < num.size() - 2; i++)
        {
            if(num[i] == num[i+1] && num[i] == num[i+2])
            {
                v.emplace_back(num.substr(i, 3));
            }
        }
        sort(v.begin(), v.end(), [](const string& a, const string& b) {
            return stoi(a) > stoi(b);
        });
        if(v.size() == 0) return "";
        return v[0];
    }
};