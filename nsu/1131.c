#include <stdio.h>
#define N 9

int main(int argc, const char *argv[])
{
    int i, j, k, n, a[N], b[N];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        k = 0;
        for (j = 0; j < N; j++)
            scanf("%d", &a[j]);
        for (j = N-1; j > 0; j--)
            if(a[j] < a[0])
                b[k++] = a[j];
        b[k++] = a[0];
        for (j = 1; j < N; j++)
            if(a[j] >= a[0])
                b[k++] = a[j];
        for (j = 0; j < N-1; j++)
            printf("%d ", b[j]);
        printf("%d\n", b[N-1]);
    }
    return 0;
}
