#include <stdio.h>
#define N 10

int main(int argc, const char *argv[])
{
    int i, j, tmp, a[N], sum = 0;
    double avg;
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    for (i = 0; i < N; i++) {
        tmp = a[i];
        for (j = i; j > 0 && a[j-1] > tmp; j--) {
            a[j] = a[j-1];
        }
        a[j] = tmp;
    }

    avg = (double)sum / 10;
    for (i = 0; a[i] < avg; i++);
    printf("%d", N-i);
    return 0;
}
