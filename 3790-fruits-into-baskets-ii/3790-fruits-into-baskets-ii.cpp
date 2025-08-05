class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans = 0;
        for(int i = 0; i < fruits.size(); i++)
        {
            int j = 0;
            while(j < baskets.size())
            {
                if(fruits[i] <= baskets[j])
                {
                    baskets[j] = 0;
                    break;
                }
                else if(j == baskets.size() - 1) ans++;
                j++;
            }
        }
        return ans;
    }
};