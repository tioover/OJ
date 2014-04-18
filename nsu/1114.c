#include <stdio.h>

int is_lower(char c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    }
    return 0;
}

char capital(char c) {
    return (char)((int)c - 32);
}

int main(int argc, const char *argv[])
{
    int i;
    char in[100];
    char end = '\0';
    while (scanf("%s", in) != EOF) {
        i =0;
        while (in[i] != end) {
            if (is_lower(in[i]))
                in[i] = capital(in[i]);
            i++;
        }
        printf("%s\n", in);
    }
    return 0;
}
