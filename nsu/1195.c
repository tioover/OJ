#include <stdlib.h>
#include <stdio.h>
#define HEX 10
#define OVERFLOW -1
#define SUCCESS 1

typedef int Status;
typedef struct lnum {
    int *num;
    int start;
    int end;
    int length;
} lnum;


void LnumAlignment(lnum *n) {
    int i, head=1;
    while (n->end != n->length) {
        for (i = ++n->start; i < ++n->end; i++)
            n->num[i] = n->num[i-1];
    }
}

lnum *LnumInit(int size) {
    int i = size, *a;
    lnum *r = malloc(sizeof(lnum));
    a = malloc(sizeof(int) * size);
    r->num = a;
    r->length = size;
    r->start = -1;
    r->end = -1;
    return r;
}

Status LnumAssign(lnum *n, int a[], int length) {
    if (length > n->length)
        return OVERFLOW;
    n->start = n->length - length;
    n->end = n->length;
    int i, j;
    for (i = n->start, j = 0; i < n->end; i++, j++)
        n->num[i] = a[j];
    return SUCCESS;
}

Status LnumDivision(lnum *n, int divisor) {
    int i, remainder=0, head=1;
    for (i = n->start; i < n->end; i++) {
        //DEBUGprintf("* remainder %d\n", remainder);
        remainder = remainder * HEX + n->num[i];
        n->num[i] = remainder / divisor;
        if (head && n->num[i] != 0)
            head = 0;
        else if (n->num[i] == 0 && head)
            n->start++;
        //DEBUGprintf("> remainder %d\n", remainder);
        remainder = remainder % divisor;
    }
    if (n->start == n->end)
        n->start--;
    LnumAlignment(n);
}

int LnumEQ(lnum *n, int m) {
    int i;
    for (i = n->end-1; i >= n->start; i--) {
        if (n->num[i] != m % HEX) {
            return 0;
        }
        m = (m - m % HEX) / HEX;
    }
    return 1;
}

lnum *LnumDelete(lnum *n) {
    free(n->num);
    free(n);
    return NULL;
}

int main(int argc, const char *argv[])
{
    int size=1000000, i, a[100000], b[1000000], top;
    char n[100000];
    lnum *num = LnumInit(size);
    while (scanf("%s", n) != EOF) {
        top = 0;
        for (i = 0; n[i] != '\0'; i++) {
            a[i] = n[i] - '0';
        }
        LnumAssign(num, a, i);
        while (!LnumEQ(num, 0)) {
            b[top++] = num->num[num->end - 1] % 2;
            LnumDivision(num, 2);
        }
        for (top--; top >= 0; top--) {
            printf("%d", b[top]);
        }
        printf("\n");
    }
    return 0;
}
