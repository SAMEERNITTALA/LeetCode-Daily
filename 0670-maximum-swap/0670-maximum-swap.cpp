class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        if(s.size() == 1) return num;
        for(int i = 0; i < s.size(); i++)
        {
            int large = s[i];
            int largeIndex = i;
            for(int j = i+1; j < s.size(); j++)
            {
                if((int)s[j] >= large)
                {
                    large = (int)s[j];
                    largeIndex = j;
                }
            }
            if(large != (int)s[i])
            {
                /*int temp = (int)s[i];
                s[i] = s[largeIndex];
                s[largeIndex] = temp;*/
                swap(s[i], s[largeIndex]);
                break;
            }
        }
        return stoi(s);
    }
};