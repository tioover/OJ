#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    double sum=2, prev=2;
    for (i = 1; i < 64; i++) {
        sum += prev * 2;
        prev = prev * 2;
        //printf("%f %f\n", sum, prev);
    }
    printf("%.0f\n", sum);
    return 0;
}
