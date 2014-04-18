#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, i, now, sum=0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &now);
        if (!(now % 2)) {
            sum += now;
        }
    }
    printf("%d", sum);
    return 0;
}
