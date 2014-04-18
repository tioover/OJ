#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, i = 2, tmp;
    long long a=1, b=1;
    scanf("%d", &n);
    while (i <= n) {
        tmp = a+b;
        a = b;
        b = tmp;
        i ++;
    }
    printf("%lld\n", b);
    return 0;
}
