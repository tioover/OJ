#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, n, sum=1;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        sum = 2*sum + 2;
    }
    printf("%d\n", sum);
    return 0;
}
