#include <stdio.h>
#include <math.h>

float sqare(float a) {
    return a*a;
}

int main(int argc, const char *argv[])
{
    float x1, y1, x2, y2;
    while (scanf("%f %f %f %f", &x1, &y1, &x2, &y2)) {
        printf("%.2f\n", sqrt(sqare(x1 - x2) + sqare(y1 - y2)));
    }
    return 0;
}
