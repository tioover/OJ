#include <stdio.h>

int square(int a){
    return a * a;
}

int is(int n) {
    int a = n % 100;
    int b = (n - a) / 100;
    return n == square(a+b);
}

int main(int argc, const char *argv[])
{
    int i;
    for (i = 1000; i < 10000; i++) {
        if (is(i))
            printf("%d ", i);
    }
    return 0;
}
