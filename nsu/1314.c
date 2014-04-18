#include <stdio.h>

int main(int argc, const char *argv[])
{
    int x, y;
    scanf("%d", &x);
    if (x < 1)
        y = x;
    else if (x >= 1 && x < 10)
        y= x*2 -1;
    else
        y= x*3 -11;
    printf("%d", y);
    return 0;
}
