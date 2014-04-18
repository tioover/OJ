#include <stdio.h>

void sort(float a[], int n)
{
    int i, j, tmp;

    for (i = 0; i < n; i++) {
        tmp = a[i];
        for (j = i; j > 0 && a[j-1] > tmp; j--)
            a[j] = a[j-1];
        a[j] = tmp;
    }
}

int main(int argc, const char *argv[])
{
    int i, n;
    float s[100], sum, avg;
    while (scanf("%d", &n) != EOF) {
        sum = 0;
        for (i = 0; i < n; i++) {
            scanf("%f", &s[i]);
        }
        sort(s, n);
        for (i = 1; i < n-1; i++) {
            sum += s[i];
        }
        avg = sum / (n-2);
        printf("%.2f\n", avg);
    }
    return 0;
}
