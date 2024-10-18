#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("Elenent : %d \n",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 79;
    head -> next = first;
    
    first -> data = 67;
    first -> next = second;

    second -> data = 47;
    second -> next = third;


    third -> data = 70;
    third -> next = NULL;

    linkedListTraversal(head);
    // printf("its just a try : \n");
    // linkedListTraversal(second);

    return 0 ;
}