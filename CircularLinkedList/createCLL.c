#include <stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    int num;
    struct node *ptr, *new_node;
    struct node *start = NULL;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != -1){
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;

        if(start == NULL){
            new_node->next=new_node;
            start = new_node;
        } 
        else{
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = start;    
        }
        printf("Enter a number: ");
        scanf("%d", &num);
    }

    ptr = start;
    while (ptr->next!= start)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\t", ptr->data);
    
}




