#include <stdio.h>
int median(int n) {
    if (n == 0)
        return 0;
    int i=0, tmp;
    while (n != 0) {
        tmp = n % 10;
        n = (n - tmp) / 10;
        i++;
    }
    return i;
}

int powten(int n) {
    int i, sum = 1;
    for (i = 0; i < n; i++) {
        sum *= 10;
    }
    return sum;
}

int main(int argc, const char *argv[])
{
    int i;
    printf("0  ");
    for (i = 1; i < 200000; i++) {
        //printf("debug %d\n", powten(median(i)));
        if ((i*i) % (powten(median(i))) == i)
            printf("%d  ", i);
    }
    return 0;
}
