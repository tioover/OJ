// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);


class Solution {
public:
    int guessNumber(int n) {
        int start = 1, end = n, mid, result;
        for (;;) {
            mid = (end - start) / 2 + start;
            result = guess(mid);
            if (result == -1)
                end = mid - 1;
            else if (result == 1)
                start = mid + 1;
            else
                return mid;
        }
    }
};