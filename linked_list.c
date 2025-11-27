#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node_t;

void print_list(node_t *l){
    node_t cur = l;
    while (cur != NULL) {
        printf("%d->", cur->data);
        cur = cur->next;
    }
    printf("\n", cur.data);
}

void push(node_t **l, int data)
{
    node_t *n;
    n = (node_t*) malloc(sizeof(node_t));
    n->data = data;
    n->next = *l;
    *l = n;
}

int main(void)
{
    node_t *head = NULL;
    head = (node_t *) mallac(sizeof(node_t));
    if (head == NULL)
    {
        return 1;
    }
    head->data = 1;
    head->next = NULL;
}

