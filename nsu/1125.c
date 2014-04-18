#include <stdio.h>
#define GROUP 100
#define ROW 300
#define END '\0'
_Bool end(char flag[]) {
    int i;
    char end[11] = "ENDOFPUINT";
    for (i = 0; i < 11; i++) {
        if (flag[i] != end[i]){return 0;}
    }
    return 1;
}

int main()
{
    int i, j;
    char flag[10]; // store END or START or ENDOFINPUT
    char text[GROUP][ROW];
    i = 0;
    while (!end(gets(flag)) && gets(text[i]) != NULL) {
        for (j = 0; text[i][j] != END; j++) {
            if (text[i][j] >= 'A' && text[i][j] <= 'Z') {
                text[i][j] = text[i][j] - 5;
                if (text[i][j] < 'A') {
                    text[i][j] = text[i][j] + 26;
                }
            }
            else if (text[i][j] >= 'A' && text[i][j] <= 'E') {
                    text[i][j] += 21;
            }
        }
        gets(flag);
        printf("%s\n", text[i++]);
    }
}
