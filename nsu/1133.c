#include <stdio.h>

int main(int argc, const char *argv[])
{
    long long i, n, a=3, b=4, c=5, tmp;
    scanf("%lld", &n);
    for (i = 4; i <= n; i++) {
        tmp = a + b + c;
        a = b;
        b = c;
        c = tmp;
    }
    printf("%lld", c);
    return 0;
}
