#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;
    scanf("%d", &n);
    while (n != 1) {
        if (n % 2) {
            printf("%d", n);
            printf("*3+1=%d\n", n = n*3 + 1);
        }
        else {
            printf("%d", n);
            printf("/2=%d\n", n/=2);
        }
    }
    return 0;
}
