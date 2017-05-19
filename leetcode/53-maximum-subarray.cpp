class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsofar = 0, maxendinghere = 0;
        for (int i: nums) {
            maxendinghere = max(maxendinghere + i, 0);
            maxsofar = max(maxsofar, maxendinghere);
        }
        if (maxsofar == 0) { return *max_element(nums.begin(), nums.end()); }
        return maxsofar;
    }
};