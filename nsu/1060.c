#include <stdio.h>

double recu(double sum, int n) {
    if (n == 1)
        return sum+1;
    else {
        sum += 1.0 / (double)n;
        return recu(sum, n - 1);
    }
}

int main(int argc, const char *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%.6f\n", recu(0, n));
    return 0;
}
