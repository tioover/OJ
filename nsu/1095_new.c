#include <stdio.h>
#define NUM 9

int main(int argc, const char *argv[])
{
    int i, a[NUM], max, min;
    double sum, avg;
    while (scanf("%d", &a[0]) != EOF) {
        sum = max = min = 0;
        for (i = 1; i < NUM; i++)
            scanf("%d", &a[i]);
        for (i = 1; i < NUM; i++) {
            if (a[i] > a[max])
                max = i;
            if (a[i] < a[min])
                min = i;
        }
        
    }
    return 0;
}
