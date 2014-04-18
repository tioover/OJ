#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, i, j, m=1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-i-1; j++)
            printf(" ");
        for (j = 0; j < m; j++) {
            printf("*");
        }
        m += 2;
        printf("\n");
    }
    return 0;
}
