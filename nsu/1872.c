#include <stdio.h>

int c(int n, int k) {
    if (k == 0)
        return 1;
    else if (n == 0)
        return 0;
    else
        return c(n-1, k-1) + c(n-1, k);
}

int main(int argc, const char *argv[])
{
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d\n", c(m, n));
    return 0;
}
