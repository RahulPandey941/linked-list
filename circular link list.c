#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void treversal(struct node *head){
    struct node *ptr = head;
    while (ptr->next != head)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d ", ptr->data);

}

int main(){

    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;


    head = (struct node *) malloc (sizeof(struct node));
    first = (struct node *) malloc (sizeof(struct node));
    second = (struct node *) malloc (sizeof(struct node));
    third = (struct node *) malloc (sizeof(struct node));
    fourth = (struct node *) malloc (sizeof(struct node));
    fifth = (struct node *) malloc (sizeof(struct node));


    head->data = 11;
    head->next = first;

    first->data = 22;
    first->next = second;

    second->data = 33;
    second->next = third;

    third->data = 44;
    third->next = fourth;

    fourth->data = 55;
    fourth->next = fifth;

    fifth->data = 65;
    fifth->next = head;

    treversal(head);

    return 0;
}