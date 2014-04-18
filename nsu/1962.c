#include <stdio.h>

int f(int c) {
    return 32 + c * 9 / 5;
}

int main(int argc, const char *argv[])
{
    int c;
    while (scanf("%d", &c) != EOF) {
        printf("c=%d->f=%d\n", c, f(c));
    }
    return 0;
}
