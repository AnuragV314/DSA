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
    int num;
    struct node *ptr, *new_node;

    printf("Enter a data: ");
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
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = NULL;
        }

        printf("Enter a data: ");
        scanf("%d", &num);
    }

    // printing linked list

    ptr = start;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");


    // 1. Deleting the First Node from a Linked List

    ptr=start;
    start = start->next;
    free(ptr);  

    // printing linked list

    ptr = start;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");


    // 2.Deleting the Last Node from a Linked List

    ptr = start;
    struct node *preptr;

    while(ptr->next != NULL){
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);

    // printing linked list
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    // 3. Deleting the Node After a Given Node in a Linked List
    int n;
    struct node *temp;
    printf("Enter a data(Deleting the Node After this data): ");
    scanf("%d", &n);

    ptr = start;
    preptr = ptr;

    while (preptr->data != n)
    {
       preptr = ptr;
       ptr = ptr->next;
    }

    temp = ptr;
    preptr->next = ptr->next;
    free(temp);

    // printing linked list
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    
}
