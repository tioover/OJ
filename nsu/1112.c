#include <stdio.h>

int main(int argc, const char *argv[])
{
    int max, tmp;
    while (scanf("%d", &max) != EOF) {
        while (scanf("%d", &tmp), tmp != 0)
            if (tmp > max)
                max = tmp;
        printf("%d\n", max);
    }
    return 0;
}
