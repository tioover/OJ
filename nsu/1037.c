#include <stdio.h>

int cube(int n) {
    return n * n * n;
}

int main(int argc, const char *argv[])
{
    int a, i, n;
    scanf("%d", &a);
    printf("%d*%d*%d=%d=", a, a, a, cube(a));
    n = a * a - a + 1;
    printf("%d", n);
    for (i = 1; i < a; i++) {
        n += 2;
        printf("+%d", n);
    }
    return 0;
}
