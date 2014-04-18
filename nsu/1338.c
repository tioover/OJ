#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int n;
    char a[100000];
    scanf("%s", a);
    for (n = strlen(a) - 1; n >= 0; n--)
        putchar(a[n]);
    return 0;
}
