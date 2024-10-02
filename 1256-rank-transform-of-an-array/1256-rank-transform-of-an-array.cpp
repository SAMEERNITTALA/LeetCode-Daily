class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size() < 1) return arr;
        vector<int> v;
        vector<int> ar(arr.begin(), arr.end());
        sort(ar.begin(), ar.end());
        unordered_map<int, int> m;
        /*m[ar[0]] = 1;
        for(int i = 1; i < ar.size(); i++)
        {
            if(ar[i] == ar[i-1]) continue;
            m[ar[i]] = m[ar[i-1]] + 1;
        }*/
        int temp = 1;
        for(int i = 0; i < ar.size(); i++)
        {
            if(m[ar[i]] == 0)
            {
                m[ar[i]] = temp;
                temp++;
            }
        }
        for(int i = 0; i < arr.size(); i++)
        {
            v.emplace_back(m[arr[i]]);
        }
        return v;
    }
};