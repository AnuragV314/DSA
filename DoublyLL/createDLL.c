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
    printf("\n Enter - 1 to end");
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
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf("Enter a data: ");
        scanf("%d", &num);
    }
    //printing DLL
    printf("DLL: ");
    ptr = start;
    while(ptr!= NULL){
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
}


