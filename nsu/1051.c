#include <stdio.h>

int cube(int n) {
    return n * n * n;
}

int is(int m) {
    int n = m;
    int sum=0, tmp;
    while (n != 0) {
        tmp = n % 10;
        //printf("%d ", tmp);
        sum += cube(tmp);
        n = (n - tmp) / 10;
    }
    //printf("\n%d \n", sum==m);
    return sum == m;
}

int main(int argc, const char *argv[])
{
    int i;
    for (i = 2; i < 1000; i++) {
        if (is(i))
            printf("%d  ", i);
    }
    //is(153);
    return 0;
}
