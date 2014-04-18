#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, a[26];
    for (i = 0; i < 26; i++) {
        a[i] = 0;
    }
    char buffer[100000];
    while(gets(buffer)) {
        for (i = 0; buffer[i] != '#' && buffer[i] != '\0'; i++) {
            if (buffer[i] >= 'a' && buffer[i] <= 'z') {
                //printf("%c, %d\n", buffer[i], buffer[i] - 'a');
                a[buffer[i] - 'a']++;
            }
        }
    }
    //printf("---\n");
    for (i = 0; i < 26; i++) {
        printf("%c %d\n", (char)(i+'a'), a[i]);
    }
    return 0;
}
