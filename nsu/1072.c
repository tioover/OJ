#include <stdio.h>
#define MAX 60

int iszero(int v, int *s) {
    if (v == 0)
        (*s)--;
}

int is_safe(char psw[]) {
    char now;
    int i, cap=0, lower=0, num=0, other=0;
    for (i = 0; psw[i] != '\0'; i++) {
        now = psw[i];
        if (now >= 'a' && now <= 'z')
            lower++;
        else if (now >= 'A' && now <= 'Z')
            cap++;
        else if (now >= '0' && now <= '9') {
            num++;
        }
        else
            other++;
    }
    i=4;
    iszero(cap, &i);
    iszero(lower, &i);
    iszero(num, &i);
    iszero(other, &i);
    //printf("debug %d %d %d %d i %d\n", alpha, num, space, other, i);
    if (i >= 3)
        return 1;
    else
        return 0;
}


int length(char psw[]) {
    int i;
    for (i = 0; psw[i] != '\0'; i++) {}
    return i;
}

int main(int argc, const char *argv[])
{
    int i, n, len;
    char psw[MAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++) { 
        //while (scanf("%s", psw) != EOF) {
        scanf("%s", psw);
        len = length(psw);
        //printf("debug len %d\n", len);
        if (len < 8 || len > 16 || !is_safe(psw))
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
