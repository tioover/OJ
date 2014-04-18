#include <stdio.h>
#include <string.h>
#include <ctype.h>

void password(char a[]) {
    int i, n = strlen(a);
    for (i = 0; i < n; i++) {
        if (!isalpha(a[i]))
            continue;
        if (a[i] >= 'a' && a[i] <= 'c')
            a[i] = '2';
        else if (a[i] >= 'd' && a[i] <= 'f')
            a[i] = '3';
        else if (a[i] >= 'g' && a[i] <= 'i')
            a[i] = '4';
        else if (a[i] >= 'j' && a[i] <= 'l')
            a[i] = '5';
        else if (a[i] >= 'm' && a[i] <= 'o')
            a[i] = '6';
        else if (a[i] >= 'p' && a[i] <= 's')
            a[i] = '7';
        else if (a[i] >= 't' && a[i] <= 'v')
            a[i] = '8';
        else if (a[i] >= 'w' && a[i] <= 'z')
            a[i] = '9';
        else if (a[i] == 'Z')
            a[i] = 'a';
        else
            a[i] = a[i]+1 + 'a' - 'A';
    }
}

int main(int argc, const char *argv[])
{
    char a[101];
    while (scanf("%s", a) != EOF) {
        password(a);
        printf("%s\n", a);
    }
    return 0;
}
