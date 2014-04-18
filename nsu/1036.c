#include <stdio.h>
int main(int argc, const char *argv[])
{
    int n, i = 0;
    char temp[51], in[101];
    scanf("%s", in);
    while (in[i] != '\0') {
        temp[i] = in[i];
        i++;
    }
    n = i;
    while (i >= 0) {
        in[n] = temp[--i];
        n++;
    }
    in[n] = '\0';
    printf("%s\n", in);
    return 0;
}
