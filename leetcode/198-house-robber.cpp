class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if (size == 0) { return 0; }
        else if (size == 1) { return nums[0]; }
        vector<int> dp {};
        dp.push_back(nums[0]);
        dp.push_back(max(nums[0], nums[1]));
        for (int i=2; i<nums.size(); ++i) {
            int do_rob = nums[i] + dp[i-2];
            int do_not_rob = dp[i-1];
            dp.push_back(max(do_rob, do_not_rob));
        }
        return dp[dp.size()-1];
    }
};