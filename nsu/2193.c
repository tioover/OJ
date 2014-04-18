#include <stdio.h>

int main(int argc, const char *argv[])
{
    unsigned long long a, sum, prev, add;
    while (scanf("%d", &a) != EOF){
        sum = 0;
        for (; a > 0; a--) {
            prev = sum;
            sum = sum % 20121215;
            add = a * a;
            sum += add;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
