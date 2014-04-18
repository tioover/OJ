#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, i;
    char c, str[10000];
    scanf("%c", &c);
    while (gets(str) != NULL) {
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == c) {
                str[i] = 0;
            }
        }
        n = i;
        for (i = 0; i < n; i++) {
            if (str[i] != 0)
                putchar(str[i]);
        }
    }
    return 0;
}
