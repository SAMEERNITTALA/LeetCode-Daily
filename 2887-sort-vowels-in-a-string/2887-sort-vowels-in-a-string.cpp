class Solution {
public:
    string sortVowels(string s) {
        vector<char> v;
        vector<int> c;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                v.emplace_back(s[i]);
                c.emplace_back(i);
            }
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < c.size(); i++)
        {
            s[c[i]] = v[i];
        }
        return s;
    }
};