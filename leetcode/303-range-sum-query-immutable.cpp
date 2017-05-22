
class NumArray {
public:
    vector<int> nums;
    vector<int> sum;


    NumArray(vector<int> nums) : nums(nums) {
        this->sum = nums;
        int n = sum.size();
        for (int i=1; i<n; ++i) {
            sum[i] = sum[i] + sum[i-1];
        }
    }
    
    int sumRange(int i, int j) {
        if (i == 0) { return sum[j]; }
        else { return sum[j] - sum[i-1]; }
    }
};
