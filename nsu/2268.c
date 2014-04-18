#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, now, i, max, min, flag;
    while (scanf("%d", &n) != EOF) {
        flag = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &now);
            if (flag == 0) {
                max = min = now;
                flag = 1;
                continue;
            }
            if (now > max)
                max = now;
            if (now < min)
                min = now;
        }
        if (n == 0)
            printf("Empty list\n");
        else
            printf("%d %d\n", max, min);
    }
    return 0;
}
