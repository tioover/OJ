#include <stdio.h>

int main(int argc, const char *argv[])
{
    char str[501];
    while (scanf("%s", str) != EOF) {
        printf("%s", str);
        scanf("%s", str);
        printf("%s\n", str);
    }
    return 0;
}
