#include<vector>
using namespace std;
class Solution {
    array<int, 1000> counter{1,1,2};
public:
    int numTrees(int n) {
        if (counter[n] != 0) { return counter[n]; }
        int count = 0;
        for (int i=1; i<=n; ++i) {
            count += numTrees(n-i) * bnumTrees(i-1);
        }
        
        counter[n] = count;
        return count;
    }
};
