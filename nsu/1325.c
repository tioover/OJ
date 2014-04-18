#include <stdio.h>
#include <math.h>


int main(int argc, const char *argv[])
{
    double sum = 0;
    int a = 1, b = 2, i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += (double)b / (double)a;
        b = a + b;
        a = b - a;
    }
    printf("%.2lf\n", sum);
    return 0;
}
