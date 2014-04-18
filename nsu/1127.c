#include <stdio.h>

int main(int argc, const char *argv[])
{
    int s;
    while (scanf("%d", &s) != EOF) {
        if (s > 100 || s < 0)
            printf("Score is error!\n");
        else if (s >= 90)
            printf("A\n");
        else if (s >= 80)
            printf("B\n");
        else if (s >= 70)
            printf("C\n");
        else if (s >= 60)
            printf("D\n");
        else {
            printf("E\n");
        }
    }
    return 0;
}
