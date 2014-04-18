#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[101], m, n, i;
    while (scanf("%d%d", &n, &m), n != 0) {
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("%d", a[0]);
        for (i = 1; i < n; i++) {
            printf(" %d", a[i]);
            if (a[i] <= m && a[i+1] >= m)
                printf(" %d", m);
        }
        printf("\n");
    }
    return 0;
}
