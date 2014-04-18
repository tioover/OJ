#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, i, j, k, len, max;
    char buffer[1001];
    while (scanf("%d%s", &n, buffer) != EOF) {
        max = 1;
        for (i = 0; i < n; i++) {
            j = i;
            k = i + 2;
            while (k < n) {
                len = k - i + 1;
                while (buffer[j] == buffer[k] && j < k) {
                    j++;
                    k--;
                }
                if (j == k && len > max) // odd.
                    max = len;
                k += 2;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
