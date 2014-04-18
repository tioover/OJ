#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, j, n, flag=1;
    char bu[255];
    scanf("%s", bu);
    for (n = 0; bu[n] != '\0'; n++) {}
    n--;
    for (i = 0; i < n/2; i++) {
        if (bu[i] != bu[n-i]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("Y\n");
    }
    else {
        printf("N\n");
    }
    return 0;
}
