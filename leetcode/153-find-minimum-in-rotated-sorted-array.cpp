class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();
        int start = 0, end = size-1;
        int mid;
        while (end - start > 4) {
            mid = (start + end) / 2;
            if (nums[mid] < nums[size-1]) {
                end = mid;
            }
            else if (nums[mid] > nums[size-1]) {
                start = mid;
            }
        }
        int res = INT_MAX;
        for (int i=start; i<=end; ++i) {
            res = min(nums[i], res);
        }
        return res;
    }
};
