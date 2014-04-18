#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[100], n, i=0;
    scanf("%d", &n);
    while (n != 0) {
        a[i] = n % 8;
        n = (n - a[i]) / 8;
        i++;
    }
    i--;
    while (i >= 0)
        printf("%d", a[i--]);
    return 0;
}
