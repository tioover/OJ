#include <stdio.h>

int cube(int x) {
    return x*x*x;
}

int s(int n) {
    int i, sum=0;
    for (i = 1; i <= n; i++) {
        sum += cube(i);
    }
    return sum;
}

int main(int argc, const char *argv[])
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; s(i) <= n; i++) {}
    printf("%d\n", i-1);
    return 0;
}
