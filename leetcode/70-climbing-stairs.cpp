#include<vector>
using namespace std;
class Solution {
    vector<int> counter;
public:
    int recu(int n) {
        if (n < 2) return 1;
        else if (counter[n-1] > 0) return counter[n-1];
        else {
            int result = recu(n-1) + recu(n-2);
            counter[n-1] = result;
            return result;
        }
    }

    int climbStairs(int n) {
        counter = vector<int>(n, 0);
        return recu(n);
    }
};