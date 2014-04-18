#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i=0;
    char text[1000];
    gets(text);
    while (text[i] != '\0') {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            if (text[i] == 'Z')
                text[i] = 'A';
            else
                text[i]++;
        }
        if (text[i] >= 'a' && text[i] <= 'z') {
            if (text[i] == 'z')
                text[i] = 'a';
            else
                text[i]++;
        }
        i++;
    }
    printf("%s", text);
    return 0;
}
