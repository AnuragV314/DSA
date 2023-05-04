#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int num;
    struct node *ptr, *new_node;
    struct node *start = NULL;
    printf("\n Enter - 1 to end");
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL)
        {
            new_node->next = new_node;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = start;
        }

        printf("Enter a number: ");
        scanf("%d", &num);
    }

    // printing CLL
    printf("\nCLL: ");
    ptr = start;
    while (ptr->next != start)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);

    // 1. Inserting a Node at the Beginning of a Circular Linked List.
    int n;
    printf("Enter a number(insert at first): ");
    scanf("%d", &n);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = n;
    ptr = start;
    while (ptr->next != start)
    {
        ptr = ptr->next;
    }
    new_node->next = start;
    ptr->next = new_node;
    start = new_node;

    // printing CLL
    ptr = start;
    while (ptr->next != start)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);

    // 2. Inserting a Node at the end of a Circular Linked List.

    printf("Enter a number(insert at end): ");
    scanf("%d", &n);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = n;
    new_node->next = start;
    ptr = start;
    while(ptr->next != start){
        ptr = ptr->next;
    }
    ptr->next = new_node;

    // printing CLL
    ptr = start;
    while (ptr->next != start)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);


    // 3. Add a node before a given node.
    printf("\nAdd a node before a given node.\n");
    struct node *preptr;
    int k;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a number(where): ");
    scanf("%d", &k);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = n;

    ptr = start;
    while(ptr->data != k){
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;

    // printing CLL
    ptr = start;
    while (ptr->next != start)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);


    // 4. Add a node after a given node
    printf("\nAdd a node after a given node.\n");
    // struct node *preptr;
    // int k;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a number(where): ");
    scanf("%d", &k);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = n;

    ptr = start;
    preptr = ptr;
    while(preptr->data != k){
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;

    // printing CLL
    ptr = start;
    while (ptr->next != start)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);

}
