#include <stdio.h>
#include <stdlib.h>

typedef struct L {
    int num;
    struct L *next;
} L;

typedef L *pL;

pL init(int n) {
    int i = 1;
    pL head = malloc(sizeof(L));
    pL current = head;
    while (i < n) {
        current->num = i;
        current->next = malloc(sizeof(L));
        current = current->next;
        i++;
    }
    current->num = i;
    current->next = head;
    return head;
}

void del_next(pL n) {
    pL t = n->next;
    n->next = n->next->next;
    free(t);
}

int one(pL n) {
    return n->next == n;
}

int main(int argc, const char *argv[])
{
    int n, m, c;
    pL a, current, prev;
    while (scanf("%d%d", &n, &c) != EOF) {
        m = 1;
        current = a = init(n);
        //printf("%d\n", current->num);
        //while (current->next != a) {
        //    printf("%d\n", current->num);
        //    current = current->next;
        //}
        //printf("-----\n");
        while (current->next != current) {
            //printf("%d ", current->num);
            //if (current->next == a)
            //    printf("\n"); 
            if (m == c) {
                m = 0;
                del_next(prev);
            }
            m++;
            prev = current;
            current = current->next;
        }
        printf("%d\n", current->num);   
    }
    return 0;
}
