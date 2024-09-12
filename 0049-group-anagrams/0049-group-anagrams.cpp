class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        if(strs.size() < 2) v.emplace_back(strs);
        
        else
        {
            vector<map<char, int>> vm;
            for(int i = 0; i < strs.size(); i++)
            {
                map<char, int> m;
                for(char c : strs[i]) m[c]++;
                vm.emplace_back(m);
            }

            for(int i = 0; i < vm.size(); i++)
            {
                vector<string> vs;
                vs.emplace_back(strs[i]);

                int j = i + 1;
                while(j < vm.size())
                {
                    if(vm[i] == vm[j])
                    {
                        vs.emplace_back(strs[j]);
                        vm.erase(vm.begin() + j);
                        strs.erase(strs.begin() + j);
                    }
                    
                    else j++;
                }
                v.emplace_back(vs);
            }        
        }

        return v;
    }
};