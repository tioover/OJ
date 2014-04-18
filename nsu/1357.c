#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char a[1000];
    int i, j, n;
    scanf("%d", &n);
    while (gets(a) != NULL) {
        if (strlen(a) > 0) {
            for (j = 0; j < strlen(a); j++)
                if (a[j] == ' ')
                    a[j] = ',';
            printf("%s\n", a);
        }
    }
    return 0;
}
