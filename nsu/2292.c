#include <stdio.h>
#include <stdlib.h>
#define ODD(n) n%2
#define MAX 10000000

int *table() {
    long long i, end = MAX+10;
    int *r = malloc(sizeof(int) * end);
    for (i = 0; i < end; i++) {
        r[i] = -1;
    }
    return r;
}

int step(long long num, int *t) {
    long long n = num;
    int nt, i = 0;
    while (n != 1) {
        if (n <= MAX && t[n] != -1) {
            t[num] = t[n] + i;
            return t[num];
        }
        if (ODD(n))
            n = (n * 3) + 1;
        else
            n /= 2;
        i++;
    }
    t[num] = i+1;
    return i;
}

int max(long long a, long long b, int *t) {
    int i, max=0, now;
    for (i = a; i <= b; i++) {
        now = t[i];
        if (now > max)
            max = now;
    }
    return max;
}

int main()
{
    int s, *t = table();
    long long a, b, i;
    for (i = 1; i <= MAX; i++) {
        step(i, t);
    }
    //t[1] = 0;
    //for (i = 1; i <= MAX; i++) {
    //    //if (t[i] >= 300)
    //    printf("%d\n", t[i]);
    //}
    while (scanf("%lld%lld", &a, &b) != EOF) {
        printf("%lld %lld ", a, b);
        if (a < b)
            printf("%d\n", max(a, b, t));
        else
            printf("%d\n", max(b, a, t));
    }
    return 0;
}
