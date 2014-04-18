#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, sum=0;
    char str[101];
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'b') || str[i] >= 'A' && str[i])
            sum ++;
    }
    printf("%d\n", sum);
    return 0;
}
