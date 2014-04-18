#include <stdio.h>
#include <math.h>

double f(double x) {
    if (x < 0)
        return 0 -x;
    else if (x < 2)
        return pow(x+1, 0.5);
    else if (x < 4)
        return pow(x+2, 5);
    else
        return 2*x +5;
}

int main(int argc, const char *argv[])
{
    double n;
    scanf("%lf", &n);
    printf("%.2lf\n", f(n));
    return 0;
}
