#include <stdio.h>
#define PI 3.1415

int main(int argc, const char *argv[])
{
    int i, n;
    double r;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &r);
        printf("%.6lf\n", PI*r*r);
    }
    return 0;
}
