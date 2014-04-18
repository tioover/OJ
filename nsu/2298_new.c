#include <stdio.h>
#include <string.h>

int is_pld(char str[], int start, int end) {
    int i, length = end-start+1;
    if (length % 2 == 0)
        return 0;
    for (i = start; i <= start + ((end - start)/2); i++)
        if (str[i] != str[start+end-i])
            return 0;
    return length;
}

int main(int argc, const char *argv[])
{
    int n, i, j, max, now;
    char str[1001];
    while (scanf("%d", &n) != EOF) {
        scanf("%s", str);
        max = 1;
        if (n > 1)
            for (i = 0; i < n; i++)
                for (j = i + 2; j < n; j++)
                    if (now = is_pld(str, i, j), now > max)
                        max = now;
        printf("%d\n", max);
    }
    return 0;
}
