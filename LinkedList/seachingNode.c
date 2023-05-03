//(line 53) searching a particular node

#include <stdio.h>
#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *start = NULL;
    int num;
    struct node *new_node, *ptr;

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

    // printing all node value

    ptr = start;
    while (ptr != NULL)
    {
        printf("%d \t", ptr->data);
        ptr = ptr->next;
    }

    // searching a particular node

    int item, i = 0;
    ptr = start;

    printf("\nEnter the element to search: ");
    scanf("%d", &item);
    while (ptr != NULL)
    {
        if (ptr->data == item)
        {
            printf("Element found at location :%d\n", i + 1);
        }
        i++;
        ptr = ptr->next;
    }
}
