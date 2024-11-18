class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans;
        code.insert(code.end(), code.begin(), code.end());
        if(k == 0) return vector<int>(n, 0);
        else
        {
            if(k > 0)
            {
                for(int i = 0; i < n; i++)
                {
                    int sum = 0;
                    for(int j = i+1; j <= i+k; j++)
                    {
                        sum += code[j];
                    }
                    ans.emplace_back(sum);
                }
            }
            else if(k < 0)
            {
                for(int i = n; i < code.size(); i++)
                {
                    int sum = 0;
                    for(int j = i-1; j >= i+k; j--)
                    {
                        sum += code[j];
                    }
                    ans.emplace_back(sum);
                }
            }
            return ans;
        }
    }
};