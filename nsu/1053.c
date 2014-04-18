#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    int m, n, i;
    scanf("%d", &m);
    n = (int)sqrt(m) + 1;
    for (i = 2; i <= n; i++) {
        if (m % i) {
            continue;
        }
        else {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}
