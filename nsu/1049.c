#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n+1];
    for (i = 1; i <= n; i++) {
        a[i] = 1;
    }
    a[1] = 1;
    a[2] = 1;
    for (i = 2; i <= n; i++) {
        if (a[i]) {
            for (j = 2*i; j <= n; j += i)
                a[j] = 0;
            printf("%d ", i);
        }
    }
    return 0;
}
