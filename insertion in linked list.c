#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
// function to print the linklist :
void displayLL(struct node *ptr){
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    
}
// function to insert a number at first :
struct node * insertAtFirst(struct node *head , int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
// function to insert a number at the end :
struct node * insertAtTheEnd(struct node *head , int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p;
    p = head;
    while (p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}
// function to insert a number at any given index :
struct node * insertAtIndex(struct node * head ,int index,int data){
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    struct node * p = head;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}
// function to insert data after 1st given data :
struct node * insertAfterGivenNode(struct node * head,struct node * prenode,int data){
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    ptr->data = data;
    struct node * p = head;
    while (p->data != prenode->data)
    {
        p = p->next;
    }
    p = p->next;
    ptr->next = prenode->next;
    prenode->next = ptr;

    return head;
     
}

int main (){

    struct node *head;
    struct node *first;
    struct node *second;98
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 45 ;
    head->next = first;

    first->data = 43;
    first->next = second;

    second->data = 89;
    second->next = third;

    third->data = 69;
    third->next = NULL;
    
    displayLL(head);

    head = insertAtFirst(head,11);
    displayLL(head);

    head = insertAtTheEnd(head,75);
    displayLL(head);


    head = insertAtIndex(head,3,143);
    displayLL(head);

    head = insertAfterGivenNode(head,second,6666);
    displayLL(head);
    head = insertAfterGivenNode(head,third,666);
    displayLL(head);

    // head = insertAtFirst(head,91);
    // displayLL(head);

    // head = insertAtFirst(head,97);
    // displayLL(head);

    // head = insertAtFirst(head,99);
    // displayLL(head);

    // head = insertAtTheEnd(head,55);
    // displayLL(head);
    
    // head = insertAtTheEnd(head,65);
    // displayLL(head);

    // head = insertAtIndex(head,3,9999);
    // displayLL(head);

    // head = insertAtIndex(head,3,1199);
    // displayLL(head);

    // head = insertAtIndex(head,3,1100);
    // displayLL(head);

    return 0;
}