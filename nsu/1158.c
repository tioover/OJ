#include <stdio.h>
void sort(int a[], int n) {
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
    int m, n, i, j, flag, d, card[100];
    scanf("%d", &m);
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &card[i]);
        }
        sort(card, n);
        flag = 1;
        d = card[1] - card[0];
        for (j = 2; j < n; j++) {
            if (card[j] - card[j-1] != d) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
