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
    int i = 1, m, flag=1;
    scanf("%d", &m);
    int p[m-1];
    prime(p, m-1);
    //for(i = 1; p[i] != 0; i++) {
    //    printf("%d ", p[i]);
    //}
    //printf("\n");
    for (i = 1; p[i] != 0; i++) {
        if (!(m % p[i])) {
            flag = 0;
            break;
        }
    }
    printf("%d", flag);
    return 0;
}
