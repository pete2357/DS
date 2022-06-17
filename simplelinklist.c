#include<stdio.h>
#include<stdlib.h>

struct linked_list
{
    int number;
    struct linked_list *next;
};
typedef struct linked_list node;

void create(node *list)
{
    printf("Input a number\n");
    printf("(type -999 to end): ");
    scanf("%d",&list->number);
    if(list->number==-999)
    {
        list->next = NULL;
    }
    else
    {
        list->next = (node*) malloc(sizeof(node));
        create(list->next);
    }
    return;
}

void print(node *list)
{
    if(list->next !=NULL)
    {
        printf("%d->",list->number);
        if(list->next->next == NULL)
        printf("%d",list->next->number);
        print(list->next);
    } 
    return;
}

int count(node *list)
{
    if(list->next ==NULL)
    return(0);
    else
    return(1+count(list->next));
}

void reverse(struct linked_list* head_ref)
{
    struct linked_list* prev = NULL;
    struct linked_list* current = head_ref;
    struct linked_list* next = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev=current;
        current = next;
    }
    head_ref = prev;
}

int main()
{
    node *head;
    void create(node *list);
    int count(node *list);
    void print(node *list);
    head = (node *)malloc(sizeof(node));
    create(head);
    printf("\n");
    print(head);
    printf("\n");
    printf("\nNumber of items = %d\n",count(head));
    printf("\nReversed Linked List= %d\n",reverse(head));
}