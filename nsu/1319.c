#include <stdio.h>

int main(int argc, const char *argv[])
{
    char now, a[10000];
    gets(a);
    int i, alpha=0, space=0, num=0, other=0;
    for (i = 0; a[i] != '\0'; i++) {
        now = a[i];
        if ((now >= 'a' && now <= 'z') || (now >= 'A' && now <= 'Z'))
            alpha++;
        else if (now == ' ')
            space++;
        else if (now >= '0' && now <= '9') {
            //printf("debug %c\n", now);
            num++;
        }
        else
            other++;
    }
    printf("%d %d %d %d\n", alpha, num, space, other);
    return 0;
}
