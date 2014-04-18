#include <stdio.h>

int main(int argc, const char *argv[])
{
    int k, i;
    double s=0;
    scanf("%d", &k);
    for (i = 1; s <= k; i++) {
        s += 1.0 / i;
    } 
    printf("%d\n", --i);
    return 0;
}
