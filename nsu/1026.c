#include <stdio.h>
#define NUM 9

void qsort(int in[], int out[], int l) {
    int i, n=0, c=4;
    //if (l%2)
    //    c = l/2;
    //else
    //    c = (c-1)/2;
    for (i = 0; i < NUM; i++) {
        if (i == c) {
            continue;
        }
        else if(in[i] < in[c]) {
            out[n] = in[i];
            in[i] = -1;
            n++;
        }
    }
    out[n++] = in[c];
    in[c] = -1;
    for (i = 0; i < NUM; i++) {
        if (in[i] != -1) {
            out[n] = in[i];
            n++;
        }
    }
}

int main(int argc, const char *argv[])
{
    int i, t, in[NUM], out[NUM], inn;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        for (inn = 0; inn < NUM; inn++) {
            scanf("%d", &in[inn]);
        }
        //for (inn = 0; inn < NUM; inn++) {
        //    printf("%d ", in[inn]);
        //}
        qsort(in, out, NUM);
        for (inn = 0; inn < (NUM - 1); inn++) {
            printf("%d ", out[inn]);
        }
        printf("%d\n", out[inn]);
    }
    return 0;
}
