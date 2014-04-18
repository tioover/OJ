#include <stdio.h>
#include <string.h>

void str_reverse(char *str) {
    int i, n = strlen(str);
    char tmp;
    for (i = 0; i < n/2; i++) {
        tmp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = tmp;
    }
}

int main(int argc, const char *argv[])
{
    char buf[1000];
    scanf("%s", buf);
    str_reverse(buf);
    printf("%s", buf);
    return 0;
}
