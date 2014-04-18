#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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

int is_pld(char *str) {
    int i, n = strlen(str);
    for (i = 0; i < n/2; i++) {
        if (str[i] != str[n-1-i])
            return 0;
    }
    return 1;
}

int is_num_pld(int n) {
    char buf[100];
    snprintf(buf, 100, "%d", n);
    return is_pld(buf);
}

int main(int argc, const char *argv[])
{
    int a, b, i, *p;
    scanf("%d%d", &a, &b);
    //printf("%d\n", is_num_pld(a));
    p = prime(b);
    for (i = 0; p[i] != 0; i++) {
        if (p[i] >= a && is_num_pld(p[i]))
            printf("%d\n", p[i]);
    }
    return 0;
}
