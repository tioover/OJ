#include <stdio.h>
#define PI 3.14159

int main(int argc, const char *argv[])
{
    float r;
    while (scanf("%f\n", &r) != EOF) {
        printf("%.3f\n", (PI * r * r * r * 4 / 3));
    }
    return 0;
}
