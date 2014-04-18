#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, i, j;
    scanf("%d", &n);
    int m[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &(m[i][j]));
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            printf("%d ", m[j][i]);
        }
        printf("%d\n", m[j][i]);
    }
    return 0;
}
