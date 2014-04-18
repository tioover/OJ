#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    int times, i;
    double height=100, displace;
    scanf("%d", &times);
    for (i = 0; i < times-1; i++) {
        displace += height;
        height /= 2;
        displace += height;
    }
    displace += height;
    printf("%.4lf", displace);
    return 0;
}
