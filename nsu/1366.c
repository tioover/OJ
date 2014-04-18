#include <stdio.h>

int main(int argc, const char *argv[])
{
    float avg;
    int num=0, now, possum=0, neg=0;
    while (scanf("%d", &now) != EOF) {
        if (now < 0)
            neg++;
        if (now > 0) {
            possum += now;
            num++;
            //printf("%d %d\n", possum, num);
        }
    }
    avg = (float)possum / (float)num;
    printf("%d\n%.2f", neg, avg);
    return 0;
}
