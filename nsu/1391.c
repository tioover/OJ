#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, i;
    char str[10000];
    scanf("%d\n", &n);
    for (i = 0; i < n; i++) {
        gets(str);
        printf("%s\n\n", str);
    }
    while (scanf("%s", str) != EOF) {
        printf("%s\n\n", str);
    }
    return 0;
}
