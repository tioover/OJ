#include <stdio.h>
#include <stdlib.h>

int comp( const void *b, const void *a ) {
    return *(int*)a - *(int *)b;
}

int main(int argc, const char *argv[])
{
    int i, n, a[100000];
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) 
            scanf("%d", &a[i]);
        qsort(a, n, sizeof(int), &comp);
        for (i = 0; i < n - 1; i++)
            printf("%d ", a[i]);
        printf("%d\n", a[i]);
    }
    return 0;
}
