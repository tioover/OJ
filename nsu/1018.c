#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int a, b, answer, correct = 0;
    char operator, temp[5];
    while (scanf("%d%c%d=%s\n", &a, &operator, &b, &temp) != EOF) {
        if (temp[0] == '?')
            continue;
        else
            answer = strtod(temp, NULL);

        if (operator == '+') {
            if (a+b == answer) {
                correct++;
            }
        }
        else if (operator == '-') {
            if (a-b == answer) {
                correct++;
            }
        }
    }
    printf("%d\n", correct);
    return 0;
}
