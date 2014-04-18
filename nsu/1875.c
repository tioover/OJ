#include <stdio.h>
#include <math.h>
double f(double x) {
    if (x < -2) 
        return x*x - sin(x);
    else if (x <= 2)
        return pow(2, x) + x;
    else
        return sqrt(x*x+x+1);
}

int main(int argc, const char *argv[])
{
    int n;
    double x;
    scanf("%d", &n);
    while (scanf("%lf", &x) != EOF) {
        printf("%.2lf\n", f(x));
    }
    return 0;
}
