#include <stdio.h>

int main(int argc, const char *argv[])
{
    double f;
    scanf("%lf", &f);
    printf("c=%.2lf\n", 5 * (f-32)/9);
    return 0;
}
