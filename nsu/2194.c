#include <stdio.h>
#include <stdlib.h>

int comp ( const void *a, const void *b )
{
    return * ( int * ) a - * ( int * ) b;
}

int main(int argc, const char *argv[])
{
    int n, i, a[1000];
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), comp);
        printf("%d", a[0]);
        for (i = 1; i < n; i++) {
            printf(" %d", a[i]);
        }
        printf("\n");
    }
    return 0;
}
