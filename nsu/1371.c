#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *prime(int max) {
    int i, j, *p=malloc(sizeof(int) * max + 1);
    //init
    for (i = 1; i <= max; i++)
        p[i] = 1;
    //sieve
    for (i = 2; i <= (int)floor(sqrt(max)); i++)
        if (i != 0)
            for (j = 2; i*j <= max; j++)
                p[i*j] = 0;
    j = 0;
    for (i = 2; i <= max; i++)
        if (p[i] == 1)
            p[j++] = i;
    p[j] = 0;
    return p;
}

int is_prime(int n) {
    int i, *p = prime(n);
    for (i=0; p[i] != 0; i++);
    return p[i-1];
}

int main(int argc, const char *argv[])
{
    int n, *p, i;
    scanf("%d", &n);
    p = prime(n);
    for (i = 0; p[i] != 0; i++) {
        if (n % p[i] == 0)
            printf("%d ", p[i]);
    }
    return 0;
}
