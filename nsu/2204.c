#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int i;
    char str[501];
    while (gets(str) != NULL) {
        for (i = strlen(str) - 1; i >= 0; i--)
            if (str[i] >= 'a' && str[i] <= 'z')
                putchar(str[i]);
        printf("\n");
    }
    return 0;
}
