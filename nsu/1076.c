#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, a, b, sum=0;
    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++) {
        if (i % 3 == 1 && i % 5 == 3)
            sum += i;
    }
    printf("%d", sum);
    return 0;
}
