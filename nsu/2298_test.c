#include <stdio.h>
#include <string.h>
#define MAX 1001

int is_pld(char txt[], int start, int end) {
    printf("%d %d\n", start, end);
    int i, j, length=end - start + 1;
    for (i = 0; i <= length/2; i++) {
        if (txt[start+i] != txt[end-i]) {
            //printf("start %d[%c], end %d[%c], i %d\n", start+i, txt[start+i], end-i, txt[end-i], i);
            return 0;
        }
    }
    //for (i = start; i <= end; i++) {
    //    putchar(txt[i]);
    //}
    //printf("\n");
    return 1;
}

int max(char txt[], int length) {
    int i, j, l=length;
    if (l % 2 == 0)
        l--;
    while (l > 1) {
        for (i = 0; i+l-1 < length; i++) {
            if (is_pld(txt, i, i+l-1)) {
                for (j = i; j <= i+l-1; j++)
                    putchar(txt[j]);
                printf("\n i %d, end %d\n", i, i+l-1);
                return l;
            }
        }
        l-=2;
        printf("%d --\n", l);
    }
    return 1;
}

int main(int argc, const char *argv[])
{
    int n;
    char str[MAX];
    while (scanf("%s", &str) != EOF) {
        printf("%d\n", max(str, strlen(str)));
    }
    return 0;
}
