#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int i;
    char n[10];
    scanf("%s", n);
    printf("%d\n", strlen(n));
    printf("%c", n[0]);
    for (i = 1; n[i] != '\0'; i++) {
        printf(" %c", n[i]);
    }
    printf("\n");
    for (i--; i >= 0; i--)
        putchar(n[i]);
    return 0;
}
