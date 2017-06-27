class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        if (size < 2) { return 0; }
        vector<int> idle(size, 0), buy(size, 0), sell(size, 0);
        idle[0] = 0;
        buy[0] = -prices[0];
        sell[0] = INT_MIN;
        for (int i = 1; i < size; ++i) {
            idle[i] = max(idle[i-1], sell[i-1]);
            sell[i] = buy[i-1] + prices[i];
            buy[i] = max(buy[i-1], idle[i-1]-prices[i]);
        }
        return max(sell[size-1], idle[size-1]);
    }
};
