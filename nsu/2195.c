#include <stdio.h>
#define MAX 60

int main() {
    char a[10001], now;
    int i, cap, lower, num, other;
    while (gets(a) != NULL) {
        cap = lower = num = other = 0;
        for (i = 0; a[i] != '\0'; i++) {
            now = a[i];
            if (now >= 'a' && now <= 'z')
                lower++;
            else if (now >= 'A' && now <= 'Z')
                cap++;
            else if (now >= '0' && now <= '9') {
                num++;
            }
            else
                other++;
        }
        printf("%d %d %d\n", cap, lower, num);
        a[0] = '\0';
        printf("\n");
    }
    return 0;
}
