#include <stdio.h>

int leap_year(int n) {
    return (n % 400 == 0) || (n % 4 == 0 && n % 100 != 0);
}

int main(int argc, const char *argv[])
{
    int n;
    scanf("%d", &n);
    if (leap_year(n))
        printf("L");
    else
        printf("N");
    return 0;
}
