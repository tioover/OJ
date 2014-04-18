#include <stdlib.h>
#include <stdio.h>
#define HEX 10
#define OVERFLOW -1
#define SUCCESS 1
#define NONZERO 0

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
    if (divisor == 0)
        return NONZERO;
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
    return 1;
}

long long _pow(int a, int b) {
    if (b == 0)
        return 1;
    else if (b == 1)
        return 0;
    else if (b == 2)
        return a * a;
    else if (b % 2 == 0)
        return _pow(_pow(a, b/2), 2);
    else
        return _pow(a, b-1) * a;
}

Status LnumMultiply(lnum *m, int n) {
    int i, t, p, flag;
    while (n > 1) {
        t = n % HEX;
        n = (n - t) / HEX;

        // Mult
        for (i = m->start; i < m->end; i++)
            m->num[i] *= t;

        // Shift
        for (i = --m->start; i < m->end - 1; i++)
            m->num[i] = m->num[i+1];
        m->num[m->end-1] = 0;

        // Carry
        flag = 0;
        p = 0;
        for (i = m->end - 1; flag && p != 0; i--) {
            m->num[i] += p;
            p = 0;
            if (m->num[i] > HEX) {
                t = m->num[i] % HEX;
                p = (m->num[i] - t) / HEX;
                m->num[i] = t;
            }
            if (p != 0 && i == m->start)
                flag = 1;
            else if (flag)
                m->start--;
        }
    }
    return SUCCESS;
}

Status LnumAdd(lnum *m, int n) {
    int i = m->end - 1;
    while (n != 0) {
        m->num[i] = m->num[i] + n % HEX;
        n = (n - n % HEX) / HEX;
        if (m->num[i] >= HEX) {
            m->num[i] -= HEX;
            n++;
        }
        i--;
    }
    if (++i < m->start) {
        m->start = i;
    }
}

lnum *LnumDelete(lnum *n) {
    free(n->num);
    free(n);
    return NULL;
}

// DEBUG


void show(lnum *num) {
    int i;
    for (i = num->start; i < num->end; i++) {
        printf("%d", num->num[i]);
    }
    printf("\n");
}

int main(int argc, const char *argv[])
{
    int size=1000000, i, b, a[100000];
    char n[100000];
    lnum *num = LnumInit(size);
    printf("Num a, b:\n");
    scanf("%s %d", n, &b);
    for (i = 0; n[i] != '\0'; i++) {
        a[i] = n[i] - '0';
    }
    LnumAssign(num, a, i);
    printf("=b? %d\n", LnumEQ(num, b));
    LnumDivision(num, 2);
    printf("a/2\n");
    show(num);
    LnumAdd(num, b);
    show(num);
    num = LnumDelete(num);
    return 0;
}
