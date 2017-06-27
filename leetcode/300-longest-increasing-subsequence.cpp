class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size(), m=1;
        if (size == 0) { return 0; }
        vector<int> dp(size, 1);
        for (int i=1; i<size; ++i) {
            int l = 0;
            for (int j=0; j<i; ++j) {
                if (nums[j] < nums[i] && dp[j] > l) {
                    l = dp[j];
                }
            }
            dp[i] = l + 1;
            m = max(dp[i], m);
        }
        return m;
    }
};
