#include <stdio.h>
#include <stdlib.h>

typedef struct N {
    int num;
    int score;
    struct N *next;
} N;

N *make(int num, int score) {
    N *node = malloc(sizeof(N));
    node->num = num;
    node->score = score;
    node->next = NULL;
    return node;
}

void insert(N *head, N *node) {
    N *current = head; // head is empty node.
    while (current->next != NULL) {
        if (current->next->num > node->num) {
            node->next = current->next;
            current->next = node;
            return;
        }
        else {
            current = current->next;
        }
    }
    current->next = node;
}

int main(int argc, const char *argv[])
{
    int n, m;
    N *current, *head = make(-1, 42);
    scanf("%d%d", &n, &m);
    while(scanf("%d%d", &n, &m) != EOF) {
        insert(head, make(n, m));
    }
    current = head->next;
    while (current != NULL) {
        printf("%d %d\n", current->num, current->score);
        current = current->next;
    }
    return 0;
}
