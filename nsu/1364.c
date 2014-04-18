#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, sum=0, i, j=2;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        sum += j;
        j+=3;
    }
    printf("%d\n",sum);
    return 0;
}
