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
    struct node *ptr, *new_node;
    struct node *start = NULL;
    printf("Enter -1 to end the CDLL.\n");
    printf("Enter the data: ");
    scanf("%d", &num);
    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL)
        {
            new_node->prev = new_node;
            new_node->next = new_node;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->prev = ptr;
            new_node->next = start;
            ptr->prev = new_node;
        }
        printf("Enter the data: ");
        scanf("%d", &num);
    }
    // Display the CDLL
    printf("Display DCLL: ");
    ptr = start;
    while (ptr->next != start)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);

    // 1. Inserting a Node at the Beginning of a Circular Doubly Linked List.
    printf("\nInserting a Node at the Beginning of a Circular Doubly Linked List.\n");
    printf("Enter the data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    ptr = start;
    new_node->data = num;

    while(ptr->next != start)
        ptr = ptr->next;
    ptr->next = new_node;
    new_node->prev = ptr;
    new_node->next = start;
    start->prev = new_node;
    start = new_node;

    // Display the CDLL
    printf("Display DCLL: ");
    ptr = start;
    while (ptr->next != start)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);

    // 2. Inserting a Node at the End of a Circular Doubly Linked List.
    printf("\nInserting a Node at the End of a Circular Doubly Linked List.\n");
    printf("Enter the data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    ptr = start;
    new_node->data = num;
    while (ptr->next != start)
        ptr = ptr->next;
    ptr->next = new_node;
    new_node->prev = ptr;
    new_node->next = start;
    start->prev = new_node;
    // Display the CDLL
    printf("Display DCLL: ");
    ptr = start;
    while (ptr->next != start)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);

}
