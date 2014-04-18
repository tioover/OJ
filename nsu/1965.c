#include <stdio.h>

double fact(int n) {
    double sum = 1;
    for (; n > 1; n--) {
        sum *= n;
    }
    return sum;
}

int main(int argc, const char *argv[])
{
    int n, i;
    double sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += 1/fact(i);
    }
    printf("sum=%.5lf\n", sum);
    return 0;
}
