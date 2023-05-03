#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

int main()
{
    struct node *new_node, *ptr;
    int num;

    printf("Enter the data: ");
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

        printf("\n Enter the data: ");
        scanf("%d", &num);
    }

    ptr = start;
    while (ptr != NULL)
    {
        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
    
    
}
