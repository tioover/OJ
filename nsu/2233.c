#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, m, n, tmp, start, end, tmpi;
    scanf("%d%d", &m, &n);
    int a[m];
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        start = 0;
        end = m - 1;
        scanf("%d", &tmp);
        while (1) {
            tmpi = start + ((end - start) / 2);
            //printf("%d %d %d\n", start, end, tmpi);
            if (a[tmpi] == tmp) {
                printf("%d\n", tmpi);
                break;
            }
            else if (a[tmpi+1] == tmp) {
                printf("%d\n", tmpi+1);
                break;
            }
            else if (a[tmpi] > tmp)
                end = tmpi;
            else if (a[tmpi] < tmp)
                start = tmpi;
            if (start + 1 >= end) {
                printf("-1\n");
                break;
            }
        }
    }
    return 0;
}
