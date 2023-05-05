#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *prev, *next;
};

int main()
{
    int num;
    struct node *new_node, *ptr;
    struct node *start = NULL;
    printf("Enter - 1 to end.\n");
    printf("Enter a data: ");
    scanf("%d", &num);

    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL)
        {
            new_node->prev = NULL;
            new_node->next = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf("Enter a data: ");
        scanf("%d", &num);
    }
    // Display DLL
    printf("DLL: ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }

    // 1. The new node is inserted at the beginning.
    printf("\nThe new node is inserted at the beginning.\n");

    int n;
    printf("Enter a data: ");
    scanf("%d", &n);
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = n;
    new_node->prev = NULL;
    new_node->next = start;
    start = new_node;

    // Display DLL
    printf("DLL: ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }

    // 2. Inserting a Node at the End end of a Doubly Linked List.
    printf("\nInserting a Node at the End end of a Doubly Linked List.\n");
    printf("Enter a data: ");
    scanf("%d", &n);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = n;
    ptr = start;
    while(ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new_node;
    new_node->prev = ptr;
    new_node->next = NULL;

    // Display DLL
    printf("DLL: ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }

    // 3. Inserting a Node After a Given Node in a Doubly Linked List.
    printf("\nInserting a Node After a Given Node in a Doubly Linked List.\n");
    int k;
    printf("Enter a data: ");
    scanf("%d", &n);
    printf("Enter node val(inserting after this Given Node): ");
    scanf("%d", &k);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = n;
    ptr = start;
    while(ptr->data != k){
        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next->prev = new_node;
    new_node->prev = ptr;
    ptr->next = new_node;

    // Display DLL
    printf("DLL: ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }

    // 4. Inserting a Node Before a Given Node in a Doubly Linked List.
    printf("\nInserting a Node Before a Given Node in a Doubly Linked List.\n");
    printf("Enter a data: ");
    scanf("%d", &n);
    printf("Enter node val(inserting before this Given Node): ");
    scanf("%d", &k);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = n;
    ptr = start;
    while(ptr->data != k){
        ptr = ptr->next;
    }
    new_node->next = ptr;
    ptr->prev = new_node;
    new_node->prev = ptr->prev;
    ptr->prev->next = new_node;

    // Display DLL
    printf("DLL: ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }

}
