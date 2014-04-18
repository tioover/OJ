#include <stdio.h>
#define A 6
#define B 8

int main(int argc, const char *argv[])
{
    int i, j, a[A], n;
    for (i = 0; i < A; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < B; i++) {
        scanf("%d", &n);
        for (j = 0; j < A; j++) {
            if (n == a[j])
                printf("%d\n", n);
        }
    }
    return 0;
}
