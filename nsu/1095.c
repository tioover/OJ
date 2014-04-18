#include <stdio.h>

void sort(double a[], int n)
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
    char name[40];
    int i;
    double s[7], sum, avg;
    while (scanf("%lf", &s[0]) != EOF) {
        sum = 0;
        for (i = 1; i < 7; i++) {
            scanf("%lf", &s[i]);
        }
        scanf("%s", name);
        sort(s, 7);
        for (i = 1; i < 6; i++) {
            sum += s[i];
        }
        avg = sum / 5.0;
        printf("%s %.2lf\n", name, avg);
    }
    return 0;
}
