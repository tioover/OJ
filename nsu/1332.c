#include <stdio.h>
int main(int argc, const char *argv[])
{
    int i, n, new, a[19];
    a[0] = -1;
    for (i = 1; i < 19; i+=2) {
        scanf("%d", &a[i]);
        a[i+1] = - 1;
    }
    //for (i = 0; i < 18; i++) {
    //    printf("%d ", a[i]);
    //}
    //printf("\n");
    scanf("%d", &new);
    i = 1;
    n = 0;
    while (a[i] < new) {
        if (i >= 18) {
            i = 19;
            break;
        }
        i = i + 2;
    }
    a[i-1] = new;
    for (i = 0; i < 19; i++) {
        if (a[i] == -1)
            continue;
        printf("%d\n", a[i]);
    }
    return 0;
}
