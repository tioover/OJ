#include <stdio.h>


int main(int argc, const char *argv[])
{
    char code[1000][1000];
    int m=0, n=0;
    while (gets(code[m]) != NULL) {
        if (code[m][0] == '/' && code[m][1] == '/')
            continue;
        for (n = 0; code[m][n+1] != '\0'; n++) {
            if (code[m][n] == '/' && code[m][n+1] == '/') {
                code[m][n] = '\0';
                break;
            }
        }
        m++;
    }
    for (n = 0; n < m; n++)
        puts(code[n]);
    return 0;
}
