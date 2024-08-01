class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = prices.size();
        if (p == 0) return 0;
        
        int mn = numeric_limits<int>::max();
        int ma = 0;

        for(int i = 0; i < p; i++) {
            if(prices[i] < mn) {
                mn = prices[i];
            }
            if(prices[i] - mn > ma) {
                ma = prices[i] - mn;
            }
        }

        return ma;
    }
};
