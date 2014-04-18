#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int i, n;
    char max, str[101];
    while(scanf("%s", str) != EOF) {
        n = strlen(str);
        max = str[0];
        for (i = 0; i < n; i++)
            if (str[i] > max)
                max = str[i];
        for (i = 0; i < n; i++) {
            if (str[i] == max)
                printf("%c(max)", max);
            else
                putchar(str[i]);
        }
        printf("\n");
    }
    return 0;
}
