#include <stdio.h>

int main()
{
    int n, i;
    long long now, prev;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        if (i < 2) {
            now = 1;
            prev = 1;
        }
        else {
            now = prev + now;
            prev = now - prev;
        }
        printf("%lld ", now);
    }
    return 0;
}
