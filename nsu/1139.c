#include <stdio.h>
#include <stdlib.h>

typedef struct date {
    int y;
    int m;
    int d;
} date;

int comp ( const void *ta, const void *tb )
{
    date *a = (date*)ta;
    date *b = (date*)tb;
    if (a->y != b->y) {
        return b->y - a->y;
    }
    else if (a->m != b->m) {
        return b->m - a->m;
    }
    else {
        return b->d - a->d;
    }
}

int main(int argc, const char *argv[])
{
    date a[10000];
    int i = 0;
    while (scanf("%d/%d/%d", &(a[i].m), &(a[i].d), &(a[i].y)) != EOF) {
        i++;
    }
    qsort(a, i, sizeof(date), &comp);
    for (i--; i >= 0; i--) {
        printf("%02d/%02d/%d\n", a[i].m, a[i].d, a[i].y);
    }
    return 0;
}
