#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, m, i, j;
    char t[100000], temp[10], d;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &m);
        for (j = 0; j < m; j++) {
            scanf("%s", temp);
            t[j] = temp[0];
        }
        t[j] = '\0';
        scanf("%s", &temp);
        d = temp[0];
        for (j = 0; t[j+1] != '\0'; j++) {
            if (t[j] != d)
                printf("%c ", t[j]);
        }
        printf("%c\n", t[j]);
    }
    return 0;
}
