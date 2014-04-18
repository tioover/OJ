#include <stdio.h>

int main(int argc, const char *argv[])
{
    int raw, rem, end;
    char put[1000];
    while (scanf("%d\n", &raw) != EOF) {
        printf("%d-->", raw);
        end = 0;
        if (raw == 0) {
            printf("0\n");
            continue;
        }
        if (raw < 0) {
            printf("-");
            raw = 0 - raw;
        }
        while (raw != 0) {
            rem = raw % 2;
            if (rem == 1) {
                put[end] = '1';
            }
            else {
                put[end] = '0';
            }
            raw = (raw - rem) / 2;
            end++;
        }
        put[end]= '\0';
        //printf("%s\n", put);
        end--;
        while (end >= 0) {
            printf("%c", put[end]);
            end--;
        }
        printf("\n");
    }
    return 0;
}
