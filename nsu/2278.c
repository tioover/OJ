#include <stdio.h>
#include <stdlib.h>

typedef struct L {
    int d;
    struct L *n;
    struct L *p;
} L;

L *make(int d, L *p) {
    L *r = malloc(sizeof(L));
    r->p = p;
    r->d = d;
    r->n = NULL;
    return r;
}

int main(int argc, const char *argv[])
{
    int d, n, i;
    L *p = NULL, *now, *head;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &d);
        now = make(d, p);
        if (p == NULL)
            head = now;
        else
            p->n = now;
        p = now;
    }
    printf("%d", head->d);
    head = head->n;
    while (head != NULL) {
        printf(" %d", head->d);
        head = head->n;
    }
    printf("\n%d", now->d);
    now = now->p;
    while (now != NULL) {
        printf(" %d", now->d);
        now = now->p;
    }
    return 0;
}
