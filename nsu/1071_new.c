#include <stdio.h>


int median(int n, int hex) {
    int i=0, tmp;
    while (n != 0) {
        tmp = n % hex;
        n = (n - tmp) / hex;
        i++;
    }
    return i;
}

int is_array_pld(int a[], int len) {
    int start=0, end=len-1;
    while (start < end) {
        if (a[start] != a[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int is_num_pld(int n, int hex) {
    int i=0, m = median(n, hex);
    int num[m];
    while (n != 0) {
        num[i] = n % hex;
        n = (n - num[i]) / hex;
        i++;
    }
    return is_array_pld(num, m);
}


int _pow(int m, int n) {
    int sum = 1;
    while (n != 0) {
        sum *= m;
        n--;
    }
}

int median2(int n, int hex) {
    int i = hex;
    while (n % i != n)
        i *= hex;
    return i/hex;
}

int handle(int n, int hex) {
    int m, r = n;
    while (n != 0) {
        m = median2(n, hex);
        r += n % hex * m;
        n = (n - (n % hex)) / hex;
    }
    return r;
}


int main(int argc, const char *argv[])
{
    int hex, n, a, i, j, flag;
    scanf("%d\n%d", &hex, &a);
    flag = 0;
    for (j = 1; j <= 30; j++) {
        a = handle(a, hex);
        if (is_num_pld(a, hex)) {
            printf("STEP=%d\n", j);
            flag = 1;
            break;
        }
    }
    if (!flag) 
        printf("Impossible!");
}
