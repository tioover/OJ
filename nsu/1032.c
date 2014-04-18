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
    int i, j;
    for (i = 1; i <= 3000; i++) {
        j = divisor_sum(i);
        if (divisor_sum(j) == i && i < j)
            printf("(%d,%d)", i, j);
    }
    return 0;
}
