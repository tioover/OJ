#include <stdio.h>

int main(int argc, const char *argv[]) {
    unsigned int n, sum, odd;
    while (scanf("%d\n", &n) != EOF) {
        sum = 0;
        while (n != 0) {
            odd = n % 10;
            n = (n-odd) / 10;
            sum += odd;
        }
        printf("%d\n", sum);
    }
    return 0;
}
