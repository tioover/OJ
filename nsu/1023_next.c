#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[4], i, j, k, h;
    for (i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (j == i)
                continue;
            for (k = 0; k < 4; k++) {
                if (k == j || k == i)
                    continue;
                printf("%d %d %d\n", a[i], a[j], a[k]);
            }
        }
    }
    return 0;
}
