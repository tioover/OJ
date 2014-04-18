#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[66536], i, n;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        i--;
        printf("%d", a[i]);
        for (i--; i >= 0; i--) {
            printf(" %d", a[i]);
        }
        printf("\n");
    }
    return 0;
}
