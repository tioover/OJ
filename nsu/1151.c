#include <stdio.h>

int main(int argc, const char *argv[])
{
    int prev=40000, now, cnt=0;
    while (scanf("%d", &now) != EOF) {
        if (now <= prev) {
            prev = now;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
