#include <stdio.h>
#include <string.h>
#define MAX 1001

int is_pld(char txt[], int start, int end) {
    while (start < end) {
        if (txt[start++] != txt[end--])
            return 0;
    }
    return 1;
}

int max(char txt[], int length) {
    int start, end, len=length;
    if (len % 2 == 0)
        len--;
    while (len > 1) {
        for (start = 0; start + len - 1 < length; start++) {
            if (is_pld(txt, start, start + len - 1)) {
                return len;
            }
        }
        len = len - 2;
    }
    return 1;
}

int main(int argc, const char *argv[])
{
    int n;
    char str[MAX];
    while (scanf("%d", &n) != EOF) {
        scanf("%s", str);
        printf("%d\n", max(str, n));
    }
    return 0;
}
