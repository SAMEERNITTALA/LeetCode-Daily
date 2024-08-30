class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> v;
        for(int i = 0; i < sentence.size(); i++)
        {
            string s = "";
            while(i < sentence.size() && sentence[i] != ' ')
            {
                s += sentence[i];
                i++;
            }
            v.emplace_back(s);
        }
        int count = 0;
        for(int i = 1; i < v.size(); i++)
        {
            if(v[i-1].back() == v[i][0]) count++;
        }
        if(v[0][0] == v[v.size() - 1].back()) count++;
        return count == v.size();
    }
};