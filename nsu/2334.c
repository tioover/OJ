#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, i=0;
    char name[100];
    scanf("%d", &n);
    while (scanf("%s", name) != EOF) {
        printf("%s\n", name);
        i++;
    }
    printf("%d\n", n-i);
    return 0;
}
