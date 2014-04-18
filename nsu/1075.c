#include <stdio.h>
#include <stdlib.h>

int comp ( const void *a, const void *b )
{
    return * ( int * ) a - * ( int * ) b;
}

int main(int argc, const char *argv[])
{
    int n, i, j, a[100], prev;
    while (scanf("%d", &n)!=EOF) {
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        qsort(a, n, sizeof(int), &comp);;
        prev = a[0];
        j = 1;
        for (i = 1; i < n; i++) {
            if (a[i] != prev) {
                j++;
            }
            prev = a[i];
        }
        prev = a[0];
        printf("%d\n%d", j, a[0]);
        for (i = 1; i < n; i++) {
            if (a[i] != prev) {
                printf(" %d", a[i], prev);
            }
            prev = a[i];
        }
    }
    return 0;
}
