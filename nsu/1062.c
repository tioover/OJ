#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, m;
    double sum = 1;
    scanf("%d", &m);
    for (i = 2; i <= m; i++) {
        sum -= 1.0 / (i*i);
    }
    printf("%.6lf\n", sum);
    return 0;
}
