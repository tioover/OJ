#include <stdio.h>
#define MAX 20

int main(int argc, const char *argv[])
{
    int i, j, a[MAX];
    for (i = 0; i < MAX; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < MAX; i++)
        for (j = 0; j < MAX; j++)
            if (i == j)
                continue;
            else if (a[j])
    return 0;
}
