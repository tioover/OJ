#include <stdio.h>
#define MAX 50000

void insert_sort(int a[], int n) {
    int i, j, tmp;
    for (i = 0; i < n; i++) {
        tmp = a[i];
        for (j = i; j > 0 && a[j-1] > tmp; j--) {
            a[j] = a[j-1];
        }
        a[j] = tmp;
    }
}

int main(int argc, const char *argv[])
{
    int n, i, num[MAX], max, max_n, prev, prev_n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    insert_sort(num, n);
    //for (i = 0; i < n; i++) {
    //    printf("%d ", num[i]);
    //}
    prev_n = max_n = 1;
    prev = max = 0;
    for (i = 1; i < n; i++) {
        if (num[i] == num[prev]) {
            prev = i;
            prev_n ++;
        }
        if (num[i] != num[prev] || i == n - 1){
            if (prev_n > max_n) {
                max_n = prev_n;
                max = prev;
            }
            prev = i;
            prev_n = 1;
        }
    }
    printf("%d\n%d\n", num[max], max_n);
    return 0;
}
