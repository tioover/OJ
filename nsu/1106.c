#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, j;
    char input[90];
    char out[90];
    while (gets(input) != NULL) {
        j=0;
        for(i=0; input[i] != '\0'; i++) {
            if (input[i] != ' ') {
                out[j] = input[i];
                j++;
            }
        }
        out[j] = '\0';
        printf("%s\n", out);
    }
    return 0;
}
