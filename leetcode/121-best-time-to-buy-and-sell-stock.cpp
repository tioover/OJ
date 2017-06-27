class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, present = 0;
        for (int i=1; i<prices.size(); ++i) {
            int profit_delta = prices[i] - prices[i-1];
            present += profit_delta;
            max_profit = max(present, max_profit);
            present = max(present, 0);
        }
        return max_profit;
    }
};
