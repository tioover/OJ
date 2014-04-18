#include <stdio.h>

int c(int n, int k) {
    if (k == 0)
        return 1;
    else if (n == 0)
        return 0;
    else
        return c(n-1, k-1) + c(n-1, k);
}

int main(int argc, const char *argv[])
{
    int n, i, j;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            for (j = 0; j <= i-1; j++)
                printf("%d ", c(i, j));
            printf("%d\n", c(i, j));
        }
        printf("\n");
    }
    return 0;
}
