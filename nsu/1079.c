#include <stdio.h>
#include <math.h>

int not_well_order(int a[], int length) {
    //int i = 0;
    //while (i < length - 1 && abs(a[i]) <= abs(a[i+1])) {
    //    i++;
    //}
    //if (i <= length - 1)
    //    return i;
    //else
    //    return -1;
    int i;
    for (i = 1; i < length; i++) {
        if (abs(a[i]) > abs(a[i-1]))
            return i;
    }
    return -1;
}

void handle(int n) {
    int i, a[n], m, temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    while (m = not_well_order(a, n), m != -1) {
        temp = a[m-1];
        a[m-1] = a[m];
        a[m] = temp;
    }
    for (i = 0; i < n-1; i++) {
        printf("%d ", a[i]);
    }
    printf("%d\n", a[i]);
}

int main(int argc, const char *argv[])
{
    int n, i;
    while (scanf("%d", &n) != EOF) {
        if (n == 0)
            break;
        handle(n);
    }
    return 0;
}
