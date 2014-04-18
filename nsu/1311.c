#include <stdio.h>
#define PI 3.14

int main(int argc, const char *argv[])
{
    float r, h;
    scanf("%f%f", &r, &h);
    printf("C1=%.2f\n", 2*PI*r);
    printf("Sa=%.2f\n", PI*r*r);
    printf("Sb=%.2f\n", 4*PI*r*r);
    printf("Va=%.2f\n", PI*4.0/3.0*r*r*r);
    printf("Vb=%.2f\n", PI*r*r*h);
    return 0;
}
