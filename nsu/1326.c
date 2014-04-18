#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    int times, i;
    double height=0, displace=0;
    scanf("%d%d", &height, &times);
    for (i = 0; i < times-1; i++) {
        displace += height;
        height /= 2;
        displace += height;
    }
    displace += height;
    printf("%.2lf %.2lf", height*2, displace);
    return 0;
}
