#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int v;
    struct Node *n;
    struct Node *p;
} N;

N *newnode(int v) {
    N *n = malloc(sizeof(N));
    n->v = v;
    n->n = NULL;
    n->p = NULL;
}

int main(int argc, const char *argv[])
{
    int a, b, i, v;
    int l[1000000];
    scanf("%d%d", &a, &b);
    N *current=NULL, *head = newnode(0), *temp;
    for (i = 0; i < a+b; i++) {
        scanf("%d", &v);
        current = newnode(v);
        if (head->n == NULL) {
            head->n = current;
            current->p = head;
        }
        else {
            temp = head;
            while (temp->n != NULL && temp->n->v > v)
                temp = temp->n;
            if (temp->n == NULL) {
                temp->n = current;
                current->p = temp;
            }
            else {
                current->n = temp->n;
                current->n->p = current;
                current->p = temp;
                current->p->n = current;
            }
        }
    }
    current = head->n;
    printf("%d", current->v);
    current = current->n;
    while (current != NULL) {
        printf(" %d", current->v);
        current = current->n;
    }
    return 0;
}
