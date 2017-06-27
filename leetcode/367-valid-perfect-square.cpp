class Solution {
public:
    bool isPerfectSquare(int num) {
        float n = num;
        float x = num / 2.0, delta = 1000.0;
        while(std::fabs(delta) > 0.25) {
            float next = (x + n / x) / 2.0;
            delta = x - next;
            x = next;
        }
        int y = std::round(x);
        return y * y == num;
    }
};
