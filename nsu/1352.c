#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, max=0, min=0, tmp, a[10];
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 10; i++) {
        if (a[i] > a[max])
            max = i;
        if (a[i] < a[min])
            min = i;
    }
    tmp = a[9];
    a[9] = a[max];
    a[max] = tmp;
    tmp = a[0];
    a[0] = a[min];
    a[min] = tmp;
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
