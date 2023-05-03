#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

int main()
{

    struct node *ptr, *new_node;
    int num;

    printf("Enter a num: ");
    scanf("%d", &num);

    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;

        if (start == NULL)
        {
            new_node->next = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = NULL;
        }

        printf("Enter a num: ");
        scanf("%d", &num);
    }

    // display the data of linked list.
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d \t", ptr->data);
        ptr = ptr->next;
    }

    // 1.The new node is inserted at the beginning.
    printf("\n\nThe new node is inserted at the beginning.\n");

    printf("\nEnter the data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = start;
    start = new_node;

    // display the data of linked list.
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d \t", ptr->data);
        ptr = ptr->next;
    }

    // 2.The new node is inserted at the end.
    printf("\n\nThe new node is inserted at the end.\n");
    printf("\nEnter the data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = NULL;
    ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new_node;

    // display the data of linked list.
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d \t", ptr->data);
        ptr = ptr->next;
    }

    // 3.Inserting a Node After a Given Node in a Linked List.
    printf("\n\nInserting a Node After a Given Node in a Linked List.\n");
    struct node *preptr;
    int n;

    printf("\nEnter the data: ");
    scanf("%d", &num);
    printf("where you want you insert, Enter the number: ");
    scanf("%d", &n);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    preptr = ptr;
    while (preptr->data != n)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;

    // display the data of linked list.
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d \t", ptr->data);
        ptr = ptr->next;
    }

    // 4. Inserting a Node Before a Given Node in a Linked List.
    printf("\n\nInserting a Node Before a Given Node in a Linked List.\n");
    // struct node * preptr;
    // int n;

    printf("\nEnter the data: ");
    scanf("%d", &num);
    printf("where you want you insert, Enter the number: ");
    scanf("%d", &n);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    preptr = ptr;
    while (ptr->data != n)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;

    // display the data of linked list.
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d \t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
