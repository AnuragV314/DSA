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
    printf("Enter -1 to end CDLL.\n");
    printf("Enter a data: ");
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
            new_node->prev = ptr;
            ptr->next = new_node;
            new_node->next = start;
            start->prev = new_node;
        }
        printf("Enter a data: ");
        scanf("%d", &num);
    }

    // display CDLL
    printf("Display CDLL: ");
    ptr = start;
    while (ptr->next != start)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d  ", ptr->data);
    
}
