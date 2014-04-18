#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b, c, now;
    a = b = c = 0;
    while (scanf("%d", &now), now > 0) {
        if (now >= 85)
            a++;
        else if(now >= 60)
            b++;
        else
            c++;
    }
    printf(">=85:%d\n60-84:%d\n<60:%d\n", a, b, c);
    return 0;
}
