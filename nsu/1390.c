#include <stdio.h>

int main(int argc, const char *argv[])
{
    char i, str[101];
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
    }
    i--;
    while (i >= 0) {
        printf("%c", str[i--]);
    }
    return 0;
}
