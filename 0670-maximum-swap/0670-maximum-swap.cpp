class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        for(int i = 0; i < s.size(); i++)
        {
            int largeIndex = i;
            for(int j = i+1; j < s.size(); j++)
            {
                if(s[j] >= s[largeIndex]) largeIndex = j;
            }
            if(s[largeIndex] != s[i])
            {
                swap(s[i], s[largeIndex]);
                break;
            }
        }
        return stoi(s);
    }
};