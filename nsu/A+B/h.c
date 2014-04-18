#include <stdio.h>

int sum(int a[], int n) {
    int i, sum=0;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main(){
    int i, n, in[10000];
    while (scanf("%d", &n)!=EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &in[i]);
        }
        printf("%d\n", sum(in, n));
    }
    return 0;
}
