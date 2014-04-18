#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int l=0, e, n, i;
    char num[10000], temp[3], new[4];
    while(scanf("%s\n", num), num[0] != '0') {
        while (num[l] != '\0') {
            l++;
        }
        //printf("%s\n", num);
        while (l > 4) {
            //printf("num %s\n", num);
            e = strtod(&(num[l-1]), NULL);
            //printf("e %d\n", e);
            num[--l] = '\0';
            n = strtod(&(num[l-3]), NULL);
            n = n - (e*5);
            if (n < 0) {
                n = 1000 + n;
                i = l-4;
                while (num[i] == '0') {
                    num[i] = '9';
                    i--;
                }
                num[i] = num[i] - 1;
            }
            //printf("%d\n", n);
            sprintf(new, "%03d", n);
            //printf("%s\n", new);
            num[l-3] = new[0];
            num[l-2] = new[1];
            num[l-1] = new[2];
            //printf("%s\n", num);
        }
        int result = (int)(strtod(num, NULL));
        if (!(result % 17))
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
