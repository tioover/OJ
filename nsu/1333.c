#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, stack[10];
    for (i = 0; i < 10; i++) {
        scanf("%d", &stack[i]);
    }
    i--;
    while (i > 0) {
        printf("%d ", stack[i--]);
    }
    printf("%d", stack[i]);
    return 0;
}
