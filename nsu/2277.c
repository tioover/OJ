#include <stdio.h>
int prevhad(int n, int a[], int i) {
    if (i == 0)
        return 0;
    for (i--; i >= 0; i--)
        if (a[i] == n)
            return 1;
    return 0;
}

int main(int argc, const char *argv[])
{
    int i, n, a[1000000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("%d", a[0]);
    for (i = 1; i < n; i++) {
        if (!prevhad(a[i], a, i))
            printf(" %d", a[i]);
    }
    return 0;
}
