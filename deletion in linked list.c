#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

// function to display linked list :
void displayLL(struct node * ptr){
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }  
    printf("\n");
}

// function to delete first element from linked list :
struct node * deleteFirstElement(struct node *head){
    struct node *p = head;
    head = head->next;
    free(p);
    return head;
}

// function to delete element from the end of linked list :
struct node * deleteLastElement(struct node * head){
    struct node * p = head;
    struct node * q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    return head;
}

// function to delete element at the given index :
struct node * deleteElementAtIndex(struct node *head,int index){
    struct node * p = head;
    struct node * q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// function to delete element after the given node :
struct node * deleteElementAtNode(struct node *head,struct node *prenode){
    struct node *p = head;
    struct node *q = head->next;

    while (p->next != prenode)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// function to delete an element by its value (only the first element will be removed) :
struct node * deleteElementByVal(struct node *head,int val){
    struct node * p = head;
    struct node * q = head->next;
    while (q->data != val && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == val)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main(){

    struct node * head;
    struct node * first;
    struct node * second;
    struct node * third;
    struct node * fourth;
    struct node * fifth;
    struct node * sixth;



    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    sixth = (struct node *)malloc(sizeof(struct node));



    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = fifth;

    fifth->data = 60;
    fifth->next = sixth;

    sixth->data = 70;
    sixth->next = NULL;

    displayLL(head);
    head = deleteFirstElement(head);
    displayLL(head);
    head = deleteLastElement(head);
    displayLL(head);
    head = deleteElementAtIndex(head,1);
    displayLL(head);
    head = deleteElementAtNode(head,third);
    displayLL(head);
    head = deleteElementByVal(head,50);
    displayLL(head);

    return 0;
}