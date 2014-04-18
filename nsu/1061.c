#include <stdio.h>

int main(int argc, const char *argv[])
{
    int m, n=1;
    for (scanf("%d", &m); m > 1; m--) {
        n *= m;
    }
    printf("%d", n);
    return 0;
}
