#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char str[501], s[501];
    while (gets(str) != NULL) {
        gets(s);
        if (strstr(str, s) != NULL)
            printf("YES!\n");
        else
            printf("NO!\n");
    }
    return 0;
}
