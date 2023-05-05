#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next, *prev;
};

int main()
{
    int num;
    struct node *ptr, *new_node;
    struct node *start = NULL;

    printf("Enter -1 to end the DLL.\n");
    printf("Enter a data: ");
    scanf("%d", &num);

    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL)
        {
            new_node->next = NULL;
            new_node->prev = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->prev = ptr;
        }
        printf("Enter a data: ");
        scanf("%d", &num);
    }
    // display DLL
    printf("display DLL: ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }

    // 1.The first node is deleted.
    printf("\nThe first node is deleted.\n");
    ptr = start;
    start = start->next;
    start->prev = NULL;
    free(ptr);

    // display DLL
    printf("display DLL: ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }

    // 2. Deleting the Last Node from a Doubly Linked List.
    printf("\nDeleting the Last Node from a Doubly Linked List.\n");
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->prev->next = NULL;
    free(ptr);

    // display DLL
    printf("display DLL: ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }

    // 3. Deleting the Node After a Given Node in a Doubly Linked List.
    printf("\nDeleting the Node After a Given Node in a Doubly Linked List.\n");
    int k;
    struct node *temp;
    printf("Enter node val(Deleting the Node After): ");
    scanf("%d", &k);
    ptr = start;
    while (ptr->data != k)
        ptr = ptr->next;
    temp = ptr->next;
    ptr->next = temp->next;
    temp->next->prev = ptr;
    free(temp);

    // display DLL
    printf("display DLL: ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }

    // 4. Deleting the Node Before a Given Node in a Doubly Linked List.
    printf("\nDeleting the Node Before a Given Node in a Doubly Linked List.\n");
    printf("Enter node val(Deleting the Node before): ");
    scanf("%d", &k);
    ptr = start;
    while (ptr->data != k)
        ptr = ptr->next;
    temp = ptr->prev;
    temp->prev->next = ptr;
    ptr->prev = temp->prev;
    free(temp);

    // display DLL
    printf("display DLL: ");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
}
