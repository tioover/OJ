#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n; 
    float max, min, tmp;
    scanf("%d", &n);
    scanf("%f%f", &max, &tmp);
    if (tmp > max) {
        min = max;
        max = tmp;
    }
    for (n -= 2; n > 0; n--){
        scanf("%f", &tmp);
        if (tmp > max)
            max = tmp;
        if (tmp < min)
            min = tmp;
    }
    printf("%.2f %.2f\n", max, min);
    return 0;
}
