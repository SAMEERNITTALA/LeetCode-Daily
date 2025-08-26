class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        multimap<double, int> m;
        for(int i = 0; i < dimensions.size(); i++)
        {
            int l = dimensions[i][0], b = dimensions[i][1];
            double d = sqrt(l*l + b*b);
            m.emplace(d, l*b);
        }

        auto comp = [](const pair<double,int>& a, const pair<double,int>& b) {
            if (a.first != b.first) 
                return a.first < b.first;   
            return a.second < b.second;    
        };

        auto it = max_element(m.begin(), m.end(), comp);

        return it->second;
    }
};