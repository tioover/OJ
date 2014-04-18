#include <stdio.h>

int main(int argc, const char *argv[])
{
    char b[201];
    int i;
    while (scanf("%s", b) != EOF) {
        for (i = 0; b[i] != '\0'; i++) {
            if (b[i] == '1')
                b[i] = '0';
            else if (b[i] == '0')
                b[i] = '1';
        }
        printf("%s\n", b);
    }
    return 0;
}
