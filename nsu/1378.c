#include <stdio.h>

int square(int n) {
    return n*n;
}

int get_sum(int a[], int end, int i, int step) {
    int sum = 0;
    while (i < end) {
        sum += a[i];
        //printf("DEBUG %d\n", a[i]);
        i += step;
    }
    return sum;
}

int main(int argc, const char *argv[])
{
    int m=3, n, i, sum=0;
    n = square(m);
    //printf("DEBUG INPUT MATRIX:\n");
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        //DEBUG
        //printf("%3d ", a[i]);
        //if (!((i+1) % m))
        //    printf("\n");
    }
    //printf("DEBUG DIA:\n");
    sum += get_sum(a, n, 0, m+1);
    //DEBUG
    //printf("\n");
    //sum += get_sum(a, n-1, m-1, m-1);
    //if (m % 2) {
    //    //printf("DEBUG - %d\n", a[(n-1)/2]);
    //    sum -= a[(n-1)/2];
    //}
    printf("%d", sum);
    return 0;
}
