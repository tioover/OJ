#include <stdio.h>

int main(int argc, const char *argv[])
{
    long long result=0, sum, i, j, n;
    scanf("%lld", &n);
    for (i = 1; i <= n; i++) {
        sum = 1;
        for (j = 1; j <= i; j++) {
            sum *= j;
        }
        result += sum;
    }
    printf("%lld", result);
    return 0;
}
