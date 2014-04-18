#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define END 100

int is_pld(int a[]) {
    printf("--\n");
    int start = 0;
    for (start = 0; a[start] == -1; start++) {}
    int end = END - 1;
    while (start < end) {
        if (a[start] != a[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int is_num_pld(int n, int hex) {
    int i, a[END];
    for (i = 0; i < END; i++)
        a[i] = -1;
    for (i--; n != 0; i--) {
        a[i] = n % hex;
        n = (n - a[i]) / hex;
    }
    return is_pld(a);
}

int median(int n, int hex) {
    printf("--\n");
    int i = hex;
    while (n % i != n)
        i *= hex;
    return i/hex;
}

int handle(int n, int hex) {
    int m, r = n;
    while (n != 0) {
        m = median(n, hex);
        r += n % hex * m;
        n = (n - (n % hex)) / hex;
    }
    return r;
}


int main(int argc, const char *argv[])
{
    int hex, n, a, i, j, flag;
    //scanf("%d\n%d", &hex, &a);
    //flag = 0;
    //for (j = 1; j <= 30; j++) {
    //    a = handle(a, hex);
    //    if (is_num_pld(a, hex)) {
    //        printf("STEP=%d\n", j);
    //        flag = 1;
    //        break;
    //    }
    //}
    //if (!flag) 
    //    printf("Impossible!");
    scanf("%d", &a);
    printf("%s\n", is_num_pld(a, 10));
    return 0;
}
