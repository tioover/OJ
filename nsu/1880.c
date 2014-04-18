#include <stdio.h>
#include <math.h>

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


int main(int argc, const char *argv[])
{
    int i, m, n, sum=0;
    scanf("%d%d", &m, &n);
    int p[n];
    prime(p, n);
    for (i = 1; p[i] != 0; i++) {
        if (p[i] >= m) {
            sum += p[i];
            //printf("%d\n", p[i]);
        }
    }
    printf("%d\n", sum);
    return 0;
}
