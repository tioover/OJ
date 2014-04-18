#include <stdio.h>
#include <math.h>
#define MAX 30000

int prime(int p[], int max) {
    int i, j;
    //init
    for (i = 1; i <= max; i++) {
        p[i] = 1;
    }
    //sieve
    for (i = 2; i <= (int)floor(sqrt(max)); i++) {
        if (i == 0)
            continue;
        for (j = 2; i*j <= max; j++) {
            p[i*j] = 0;
        }
    }
    j = 0;
    for (i = 1; i <= max; i++) {
        if (p[i] == 1)
            p[j++] = i;
    }
    p[j] = 0;
}

int is_prime(int p[], int n) {
    int i;
    if (n == 1)
        return 0;
    for (i = 0; p[i] != 0; i++) {
        if (p[i] == n)
            return 1;
    }
    return 0;
}

int main(int argc, const char *argv[])
{
    int i, n, sum=0;
    int p[MAX + 1];
    prime(p, MAX);
    scanf("%d", &n);
    for (i = 2; i <= n/2; i++) {
        if (is_prime(p, i) && is_prime(p, n-i)) {
            sum ++;
        }
    }
    printf("%d", sum);
    return 0;
}
