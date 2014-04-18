#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, m, n, num;
    int t[100000];
    while (scanf("%d", &num) != EOF) {
        for (i = 0; i < num; i++) {
            scanf("%d", &t[i]);
        }
        scanf("%d%d", &m, &n);
        if (t[0] < m || t[0] > n) {
            i = 1;
            printf("%d", t[0]);
        }
        else {
            i = 2;
            printf("%d", t[1]);
        }
        for (; i < num; i++) {
            //printf("debug %d\n", t[i]);
            if (t[i] < m || t[i] > n)
                printf(" %d", t[i]);
        }
        printf("\n");
    }
    return 0;
}
