#include <stdio.h>

int c(int a[]) {
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j == i)
                continue;
            for (k = 0; k < 3; k++) {
                if (k == j || k == i)
                    continue;
                printf("%d %d %d\n", a[i], a[j], a[k]);
            }
        }
    }
}


int main(int argc, const char *argv[])
{
    int i, j, a[4], b[3];
    for (i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (j == i)
                continue;
            if (j < i)
                b[j] = a[j];
            else
                b[j-1] = a[j];
        }
        //DEBUG
        //for (j = 0; j < 3; j++) {
        //    printf("%d ", b[j]);
        //}
        //printf("\n");
        c(b);
    }
    return 0;
}
