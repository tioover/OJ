class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> a {0};
        for (int i=1; i <= num; ++i) {
            int test = 1;
            int n = a[i >> 1];
            if (i & test == test) { ++n; }
            a.push_back(n);
        }
        return a;
    }
};
