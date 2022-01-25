/*Devanshi Parmar*/
/*Question 2: Traversing a linked list and printing each node's data element */

#include <stdio.h>
#include <stdlib.h>

struct SinglyLinkedListNode{
    int data;
    struct SinglyLinkedListNode *next;
};

int main()
{
    struct SinglyLinkedListNode *head, *second, *third = NULL;

    head= (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    second= (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    third= (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));

    head->data = 20; // assign data in first node
    head->next = second; // Link first node with second

    second->data = 46;
    second->next = third;

    third->data = 64;
    third->next = NULL;

    printLinkedList(head);

    return 0;
}


int printLinkedList(struct SinglyLinkedListNode *head)
{
    struct SinglyLinkedListNode* ptr=head;

    if(head==NULL)
        return;

    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }

    return 0;
}
