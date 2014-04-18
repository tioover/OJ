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

int is_prime(int a) {
    int i, p[a];
    prime(p, a-1);
    for (i = 1; p[i] != 0; i++) {
        if (a % p[i] == 0)
            return 0;
    }
    return 1;
}

int main(int argc, const char *argv[])
{
    int i = 1, n;
    while (scanf("%d", &n) != EOF){
        printf("Case %d: ", i++);
        if (is_prime(n)) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}
