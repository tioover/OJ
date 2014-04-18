#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, i, a, b;
    char buffer[1001];
    gets(buffer);
    scanf("%d", &n);
    while(scanf("%d%d", &a, &b) != EOF) {
        for (i=0; i < b; i++) {
            putchar(buffer[a+i]);
        }
        printf("\n");
    }
    return 0;
}
