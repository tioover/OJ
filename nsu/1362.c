#include <stdio.h>


int main(int argc, const char *argv[])
{
    double x;
    scanf("%lf", &x);
    if (x < 1)
        printf("%.2lf\n", x);
    else if (x < 10)
        printf("%.2lf\n", 2*x-1);
    else
        printf("%.2lf\n", 3*x-11);
    return 0;
}
