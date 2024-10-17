class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        if(s.size() == 1) return num;
        for(int i = 0; i < s.size(); i++)
        {
            int largeIndex = i;
            for(int j = i+1; j < s.size(); j++)
            {
                if((int)s[j] >= (int)s[largeIndex]) largeIndex = j;
            }
            if((int)s[largeIndex] != (int)s[i])
            {
                swap(s[i], s[largeIndex]);
                break;
            }
        }
        return stoi(s);
    }
};