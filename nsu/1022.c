#include <stdio.h>
int is_alphabet(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    }
    return 0;
}


int main(int argc, const char *argv[])
{
    char out[80];
    char input[80];
    char end = '\0';
    int now = 0, i=0;
    scanf("%s", input);
    while (input[now] != end) {
        if (is_alphabet(input[now])) {
            out[i] = input[now];
            i++;
        }
        now++;
    }
    out[i] = end;
    printf("%s", out);
    return 0;
}
