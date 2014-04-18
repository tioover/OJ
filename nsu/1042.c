#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, max;
    scanf("%d", &max);
    while (scanf("%d", &i), i != -1)
        if (i > max)
            max = i;
    printf("%d", max);
    return 0;
}
