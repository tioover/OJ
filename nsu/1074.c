#include <stdio.h>
#define MAX 1000
int abs(int n) {
    if (n < 0)
        n = 0 - n;
    return n;
}

int main(int argc, const char *argv[])
{
    int i, j, m, n, f[MAX], g[MAX], tmp, min;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
        scanf("%d", &f[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &g[i]);
    min = abs(f[0] - g[0]);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            tmp = abs(f[i] - g[j]);
            if (tmp < min)
                min = tmp;
        }
    }
    printf("%d\n", min);
    return 0;
}
