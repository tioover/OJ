#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char str[501], s[10];
    while (scanf("%s", str) != EOF) {
        scanf("%s", s);
        if (strstr(str, s) != NULL)
            printf("Found!\n");
        else
            printf("Not found!\n");
    }
    return 0;
}
