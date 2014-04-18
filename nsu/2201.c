#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char s[501];
    while (gets(s) != NULL)
        printf("%d\n", strlen(s));
    return 0;
}
