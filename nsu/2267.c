#include <stdio.h>

void insert(char a[], int len, int n, int v) {
    int i=n, temp=v, swap;
    while (i <= len) {
        swap = a[i];
        a[i] = temp;
        temp = swap;
        i++;
    }
}

int main(int argc, const char *argv[])
{
    char a[100000];
    int i, len=0, n, v;
    while (scanf("%d %c", &n, &v) != EOF) {
        insert(a, len++, n-1, v);
    }
    for (i = 0; i < len; i++) {
        printf("%c", a[i]);
    }
    return 0;
}
