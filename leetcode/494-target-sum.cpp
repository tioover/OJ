#include<vector>
#include<array>
#include<map>

class Solution {
    std::map<pair<int, int>, int> dp{};

    int f(vector<int>& nums, size_t n, int target) {
        int count = 0;
        auto it = dp.find({n, target});
        if (it != dp.end()) { return (*it).second; }
        else if (n == 0) {
            if (target == 0) count=1;
        }
        else {
            count = f(nums, n-1, target+nums[n-1]) + f(nums, n-1, target-nums[n-1]);
        }
        dp[{n, target}] = count;
        return count;
    }
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        return f(nums, nums.size(), S);
    }
};