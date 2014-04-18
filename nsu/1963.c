#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, i=0, j=0, maxi=0, maxj=0;
    scanf("%d", &n);
    int a[n][n];
    while (i < n && j < n) {
        scanf("%d", &a[i][j]);
        if (a[i][j] > a[maxi][maxj]) {
            maxi = i;
            maxj = j;
        }
        j ++;
        if (j == n) {
            i++;
            j=0;
        }
    }
    printf("%d %d %d\n", a[maxi][maxj], maxi+1, maxj+1);
    return 0;
}
