#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b, i, tmp, flag;
    while (scanf("%d%d", &a, &b) != EOF) {
        flag = 1;
        if (a == b && a == 0)
            break;
        for (i = 0; i < 100; i++) {
            tmp = a * 100 + i;
            if (tmp % b == 0)
                if (flag) {
                    flag = 0;
                    printf("%02d", tmp % 100);
                }
                else
                    printf(" %02d", tmp % 100);
        }
        printf("\n");
    }
    return 0;
}
