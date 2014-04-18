#include <stdio.h>

int F(int x) {
    if (x == 1)
        return 10;
    else
        return F(x-1) + 2;
}

int main(int argc, const char *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d", F(n));
    return 0;
}
