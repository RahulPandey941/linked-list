#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * nxtptr;
    struct Node * preptr;
};



int main(){

    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->preptr = NULL;
    head->nxtptr = first;

    first->data = 10;
    first->preptr = head;
    first->nxtptr = second;

    second->data = 10;
    second->preptr = first;
    second->nxtptr = third;

    third->data = 10;
    third->preptr = second;
    third->nxtptr = fourth;

    fourth->data = 10;
    fourth->preptr = third;
    fourth->nxtptr = NULL;


    return 0;
}