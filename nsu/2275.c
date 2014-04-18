#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, n, insert, N, a[100000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d%d", &insert, &N);
    insert--;
    if (insert == 0) {
        i = 0;
        printf("%d", N);
    }
    else {
        i = 1;
        printf("%d", a[0]);
    }
    for (; i < n; i++) {
        if (insert == i && insert != 0)
            printf(" %d", N);
        printf(" %d", a[i]);
    }
    if (insert >= n)
        printf(" %d", N);
    return 0;
}
