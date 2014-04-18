#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, p, f=1;
    scanf("%d", &p);
    while (scanf("%d", &n) != EOF) {
        if (n < p)
            f = 0;
    } 
    if (f) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
