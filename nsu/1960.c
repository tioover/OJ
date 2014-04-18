#include <stdio.h>
#include <math.h>

double fact(int n) {
    double sum = 1;
    for (; n > 1; n--) {
        sum *= n;
    }
    return sum;
}

int main(int argc, const char *argv[])
{
    int i, n;
    double x, sum = 0;
    scanf("%lf%d", &x, &n);
    for (i = 1; i <= n; i++) {
        sum += pow(-1, i-1) * (pow(x, i)/ fact(i));
    }
    printf("%.4lf\n", sum);
    return 0;
}
