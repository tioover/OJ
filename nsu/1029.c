#include <math.h>
#include <stdio.h>
int cube(int a) {
    return pow(a, 3);
}
int judge (int input) {
    int a, b, c, n;
    a = input % 10;
    b = ((input - a) / 10) % 10;
    c = (input - (input % 100)) / 100;
    n = cube(a)+cube(b)+cube(c);
    if (n == input)
        return 1;
    else
        return 0;
}
int main(int argc, const char *argv[])
{
    int i = 100;
    while (i < 1000) {
        if (judge(i))
            printf("%d ", i);
        i++;
    }
}
