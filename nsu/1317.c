#include <stdio.h>

int main(int argc, const char *argv[])
{
    double n;
    scanf("%lf", &n);
    if (n <= 100000)
        printf("%.0lf\n", n*0.1);
    else if (n <= 200000)
        printf("%.0lf\n", (n-100000)*0.075) + 10000;
    else if (n <= 400000)
        printf("%.0lf\n", (n-200000)*0.05 + 17500);
    else if (n <= 600000)
        printf("%.0lf\n", (n-400000)*0.03 + 27500);
    else if (n <= 1000000)
        printf("%.0lf\n", (n-600000)*0.015 + 6000 + 27500);
    else
        printf("%.0lf\n", (n-1000000)*0.01 + 45500);
    return 0;
}

