#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[1000000], n, i, d;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &d);
    if (a[0] == d) {
        printf("%d", a[1]);
        i = 2;
    }
    else {
        printf("%d", a[0]);
        i = 1;
    }
    for (; i < n; i++) {
        if (a[i] == d)
            continue;
        printf(" %d", a[i]);
    }
    return 0;
}
