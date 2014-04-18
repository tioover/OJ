#include <stdio.h>

void insert(int a[], int len, int n, int v) {
    int i=n, temp=v, swap;
    while (i <= len) {
        swap = a[i];
        a[i] = temp;
        temp = swap;
        i++;
    }
}

void delete(int a[], int len, int n) {
    int i=n;
    while (i < len-1) {
        a[i] = a[i+1];
        i++;
    }
}

int is(char a[]) {
    if (a[0] == 'i')
        return 1;
    else if (a[0] == 'd')
        return -1;
    else if (a[0] == 's')
        return 0;
}

int main(int argc, const char *argv[])
{
    char com[10];
    int a[100000];
    int i, j, len=0, n, num, v, t;
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%s", com);
        if (is(com) == 1) {
            scanf("%d%d", &n, &v);
            insert(a, len++, n-1, v);
        }
        else if (is(com) == -1) {
            scanf("%d", &n);
            delete(a, len--, n-1);
        }
        else {
            printf("%d", a[0]);
            for (j = 1; j < len; j++) {
                printf(" %d", a[j]);
            }
            printf("\n");
        }
    }
    //while (scanf("%d %c", &n, &v) != EOF) {
    //    insert(a, len++, n-1, v);
    //}
    //for (i = 0; i < len; i++) {
    //    printf("%c", a[i]);
    //}
    return 0;
}
