#include <stdio.h>
#include <string.h>


int is_pld(char str[], int start, int end) {
    // [start, end)
    // if end is -1, end is string length;
    int i;
    if (end == -1)
        end = strlen(str);
    end --;
    for (i = start; i <= (end-start) / 2; i++) {
        if (str[i] != str[end-i])
            return 0;
    }
    return 1;
}
