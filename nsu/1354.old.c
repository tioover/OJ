#include <stdio.h>

void init(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        a[i] = 1;
    }
}

int next(int a[], int n, int i) {
    if (i == n)
        i = 0;
    else
        i++;
    while (a[i] == 0) {
        //printf("ii %d\n", i);
        i++;
        if (i == n) {
            i = 0;
        }
    }
    return i;

} 

void rm(int a[], int n) {
    int i=0;
    int m=1;
    while (next(a, n, i) != i) {
        printf("i %d m %d\n", i, m);
        i = next(a, n, i);
        if (m == 3) {
            a[i] = 0;
            m = 1;
        }
        m++;
    }
    printf("%d\n", i+1);
}

int main(int argc, const char *argv[])
{
    int i, n;
    scanf("%d", &n);
    int a[n];
    init(a, n);
    //rm(a, n);
    //i = 0;
    //int o = i;
    //while (o = next(a, n, o), o != i) {
    //    printf("%d\n", o);
    //}
    return 0;
}
