class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int overall = 0;
        for (int i=1; i<prices.size(); ++i) {
            int profit_delta = prices[i] - prices[i-1];
            if (profit_delta > 0) {
                overall += profit_delta;
            }
        }
        return overall;
    }
};
