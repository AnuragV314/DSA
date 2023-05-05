#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *prev, *next;
};

int main(){
    int num;
    struct node *ptr, *new_node;
    struct node *start = NULL;

    printf("Enter -1 to end.\n");
    printf("Enter the number: ");
    scanf("%d", &num);

    while(num != -1){
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        if(start == NULL){
            new_node->prev = new_node;
            new_node->next = new_node;
            start = new_node;
        }
        else{
            ptr = start;
            while(ptr->next != start)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->prev = ptr;
            new_node->next = start;
            start->prev = new_node;
        }
        printf("Enter the data: ");
        scanf("%d", &num);
    }
    // Display CDLL
    printf("Display CDLL: ");
    ptr = start;
    while(ptr->next != start){
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);

    // 1. Deleting the First Node from a Circular Doubly Linked List.
    printf("\nDeleting the First Node from a Circular Doubly Linked List.\n");
    ptr = start;
    while(ptr->next != start)
        ptr = ptr->next;
    ptr->next = start->next;
    start->next->prev = ptr;
    free(start);
    start = start->next;

    // Display CDLL
    printf("Display CDLL: ");
    ptr = start;
    while(ptr->next != start){
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);

    // 2. Deleting the Last Node from a Circular Doubly Linked List.
    printf("\nDeleting the Last Node from a Circular Doubly Linked List.\n");
    ptr = start;
    while(ptr->next != start)
        ptr = ptr->next;
    start->prev = ptr->prev;
    ptr->prev->next = start;
    free(ptr);

    // Display CDLL
    printf("Display CDLL: ");
    ptr = start;
    while(ptr->next != start){
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
}


