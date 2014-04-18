#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;
    while (scanf("%d", &n) != EOF) 
        printf("%c", (char)n);
    return 0;
}
