#include <stdio.h>
#define ODD(n) n%2

int step(int n) {
    int i = 1;
    while (n != 1) {
        if (ODD(n))
            n = (n * 3) + 1;
        else
            n /= 2;
        i++;
    }
    return i;
}

int main(int argc, const char *argv[])
{
    int n, i, j, max, tmp;
    while (scanf("%d%d", &n, &j) != EOF) {
        i = n;
        max = step(i);
        for (i++; i <= j; i++) {
            tmp = step(i);
            if (tmp > max)
                max = tmp;
        }
        printf("%d %d %d\n", n, j, max);
    }
    return 0;
}
