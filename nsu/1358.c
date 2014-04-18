#include <stdio.h>

typedef struct stu {
    char num[10];
    char name[100];
    int a;
    int b;
    int c;
} stu;

int main(int argc, const char *argv[])
{
    int i, n, now, max, maxi, suma=0, sumb=0, sumc=0;
    stu a[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %s %d %d %d", &(a[i].num), &(a[i].name), &(a[i].a), &(a[i].b), &(a[i].c));
    }
    max = a[0].a + a[0].b + a[0].c;
    maxi = 0;
    for (i = 0; i < n; i++) {
        now = a[i].a + a[i].b + a[i].c;
        if (now > max) {
            max = now;
            maxi = i;
        }
        suma += a[i].a;
        sumb += a[i].b;
        sumc += a[i].c;
    }
    printf("%d %d %d\n", suma/n, sumb/n, sumc/n);
    printf("%s %s %d %d %d\n", a[maxi].num, a[maxi].name, a[maxi].a, a[maxi].b, a[maxi].c);
    return 0;
}
