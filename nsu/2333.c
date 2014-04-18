#include <stdio.h>
#include <stdlib.h>
#define MAX 9

int **solve(int **a);

void show_matrix(int **a) {
    int i, j;
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}

int **new_matrix() {
    int i, **a;
    a = malloc(sizeof(int*)*MAX);
    for (i = 0; i < MAX; i++) {
        a[i] = malloc(sizeof(int)*MAX);
    }
    return a;
}

int **copy(int **a) {
    int i, j, **r = new_matrix();
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++)
            r[i][j] = a[i][j];
    }
    return r;
}

int is_solve(int **a) {
    int i, j;
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            if (a[i][j] == 0)
                return 0;
        }
    }
    return 1;
}

int **recu(int **a, int ci, int cj) {
    int i, j, istart, iend, jstart, jend, table[MAX];
    for (i = 0; i < MAX; i++)
        table[i] = i+1;
    for (i = 0; i < MAX; i++)
        for (j = 0; j < MAX; j++)
            if (a[ci][i] == table[j])
                table[j] = -1;
            else if (a[i][cj] == table[j])
                table[j] = -1;
    istart = ((ci - (ci % 3))/3) * 3;
    iend = istart + 3;
    jstart = ((cj - cj % 3)/3) * 3;
    jend = jstart + 3;
    for (; istart < iend; istart++) {
        for (j = jstart; j < jend; j++)
            for (i = 0; i < MAX; i++) {
                if (a[istart][j] == table[i])
                    table[i] = -1;
            }
    }

    int **m;
    for (i = 0; i < MAX; i++) {
        if (table[i] == -1)
            continue;
        m = copy(a);
        m[ci][cj] = table[i];
        m = solve(m);
        if (m != NULL)
            return m;
    }
    return NULL;
}

int **solve(int **a) {
    if (is_solve(a))
        return a;
    int i, j;
    for (i = 0; i < MAX; i++)
        for (j = 0; j < MAX; j++) {
            if (a[i][j] == 0) {
                return recu(a, i, j);
            }
        }
}

int main(int argc, const char *argv[])
{
    int m, n, i, j, **a=new_matrix();
    scanf("%d", &n);
    for (m = 0; m < n; m++) {
        for (i = 0; i < MAX; i++)
            for (j = 0; j < MAX; j++)
                scanf("%1d", &a[i][j]);
        a = solve(a);
        show_matrix(a);
        printf("\n");
    }
    return 0;
}
