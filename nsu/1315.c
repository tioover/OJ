#include <stdio.h>

int main(int argc, const char *argv[])
{
    int in;
    scanf("%d", &in);
    if (in >= 90)
        printf("A");
    else if (in >= 80)
        printf("B");
    else if (in >= 70)
        printf("C");
    else
        printf("D");
    return 0;
}
