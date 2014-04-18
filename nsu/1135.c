#include <stdio.h>

int have7(int n) {
    while (n != 0) {
        if (n % 10 == 7)
            return 1;
        n = (n - n % 10) / 10;
    }
    return 0;
}

int main(int argc, const char *argv[])
{
    int n, i, sum=0, now, t;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (i % 7 == 0 || have7(i)) {
            sum ++;
        }
    }
    printf("%d\n",sum);
    return 0;
}
