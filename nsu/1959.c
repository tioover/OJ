#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    int now, a[10], i=0, j, temp;
    while (scanf("%d", &now) != EOF) {
        a[i] = now;
        i++;
    }
    j = 0;
    for (i = 1; i < 10; i++) {
        if (abs(a[i]) < abs(a[j])) {
            j = i;
        }
    }
    temp = a[j];
    a[j] = a[9];
    a[9] = temp;
    printf("%d", a[0]);
    for (i = 1; i < 10; i++) {
        printf(" %d", a[i]);
    }
    return 0;
}
