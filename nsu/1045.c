#include <stdio.h>
int make(int a, int b) {
    int i, sum=0, mult=1;
    for (i = 0; i < b; i++) {
        sum += a * mult;
        mult *= 10;
    }
    return sum;
}

int main(int argc, const char *argv[])
{
    int a, b, sum=0;
    for (scanf("%d%d", &a, &b); b > 0; b--)
        sum += make(a, b);
    printf("%d\n", sum);
    return 0;
}
