#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int num;
    struct node *ptr, *preptr, *new_node;
    struct node *start = NULL;

    printf("Enter - 1 to end.\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;

        if(start == NULL){
            new_node->next = new_node;
            start = new_node;
        }
        else{
            ptr = start;
            while (ptr->next != start)
            {
                ptr = ptr->next;
            }
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
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);

    // 1. Deleting the First Node from a Circular Linked List
    printf("Deleting the First Node from a Circular Linked List.\n");
    ptr = start;
    while (ptr->next != start)
    {
        ptr = ptr->next;
    }
    ptr->next = start->next;
    free(start);
    start = ptr->next;

    // printing CLL
    ptr = start;
    while (ptr->next != start)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);


    // 2. Deleting the Last Node from a Circular Linked List.
    printf("Deleting the Last Node from a Circular Linked List.\n");
    ptr = start;
    while (ptr->next != start)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = start;
    free(ptr);

    // printing CLL
    ptr = start;
    while (ptr->next != start)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);
    
}
