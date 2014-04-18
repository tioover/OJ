#include <stdio.h>
#include <math.h>

int divisor_sum(int n) {
    int i, sum = 1;
    for (i = 2; i <= floor(sqrt(n)); i++) {
        if (!(n%i)) {
            sum += i;
            if (i != n/i)
                sum += n/i;
        }
    }
    return sum;
}

int main(int argc, const char *argv[])
{
    int m, a, b;
    for (scanf("%d", &m); m > 0; m--) {
        scanf("%d%d", &a, &b);
        if (divisor_sum(a) == b && divisor_sum(b) == a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
