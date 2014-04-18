#include <stdio.h>

int main()
{
    int n=200, i, j, k=1;
    int a[n+1], p[100];
    for (i = 1; i <= n; i++) {
        a[i] = 1;
    }
    a[1] = 1;
    a[2] = 1;
    for (i = 2; i <= n; i++) {
        if (a[i]) {
            for (j = 2*i; j <= n; j += i)
                a[j] = 0;
            if (i > 100) {
                p[k] = i;
                k++;
            }
        }
    }
    printf("%d\n", k-1);
    for (i = 1; i < k-1; i++) {
        printf("%d ", p[i]);
    }
    printf("%d", p[i]);
    return 0;
}
