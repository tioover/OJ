#include <stdio.h>

void handle(float L, float W, float x, float y, float R, float a, float v,
            float s, float *rex, float *rey) {
    float displace = s * v;
}



int main(int argc, const char *argv[])
{
    float L, W, x, y, R, a, v, s, rex, rey;
    while (scanf("%f %f %f %f %f %f %f %f", &L, &W, &x, &y, &R, &a, &v, &s), 
           L != 0) {
        handle(L, W, x, y, R, a, v, s, &rex, &rey);
        printf("%.2f %.2f\n", rex, rey);
    }
    return 0;
}
