#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_pld(char *str) {
    int i, n = strlen(str);
    for (i = 0; i < n/2; i++) {
        if (str[i] != str[n-1-i])
            return 0;
    }
    return 1;
}

int is_num_pld(int n) {
    char buf[100];
    snprintf(buf, 100, "%d", n);
    return is_pld(buf);
}

int median(int n) {
    int i = 10;
    while (n % i != n)
        i *= 10;
    return i/10;
}

int handle(int n) {
    int m, r = n;
    while (n != 0) {
        m = median(n);
        r += n % 10 * m;
        n = (n - (n % 10)) / 10;
    }
    return r;
}


int main(int argc, const char *argv[])
{
    int n, a, i, j, flag;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        flag = 0;
        for (j = 1; j <= 8; j++) {
            a = handle(a);
            if (is_num_pld(a)) {
                printf("%d\n", j);
                flag = 1;
                break;
            }
        }
        if (!flag) 
            printf("0\n");
    }
    return 0;
}
