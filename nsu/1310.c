#include <stdio.h>
int main(int argc, const char *argv[])
{
    int i;
    char s[6];
    scanf("%s", s);
    for (i = 0; i < 5; i++) {
        printf("%c", s[i]+4);
    }
    return 0;
}
