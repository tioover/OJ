#include <stdio.h>
#include <stdlib.h>

int comp ( const void *a, const void *b )
{
    return * ( int * ) a - * ( int * ) b;
}

int main(int argc, const char *argv[])
{
    int n, i, a[100], prev;
    while (scanf("%d", &n), n != 0) {
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        qsort(a, n, sizeof(int), &comp);
        prev = a[0];
        printf("%d", a[0]);
        for (i = 1; i < n; i++) {
            if (a[i] != prev) {
                printf(" %d", a[i], prev);
            }
            prev = a[i];
        }
        printf("\n\n");
    }
    return 0;
}
