#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b, ss, cs;
    while (scanf("%d%d", &a, &b) != EOF) {
        ss = 0;
        cs = 0;
        for (; a <= b; a++)
            if (a % 2 == 0)
                ss += a * a;
            else
                cs += a * a * a;
        printf("%d %d\n", ss, cs);
    }
    return 0;
}
