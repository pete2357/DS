#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    char name,address;
    struct node *next;
};

struct node *f = NULL;
struct node *r = NULL;

void enqueue(int d)
{
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = d;
    n->next = NULL;
    if((r==NULL)&&(f==NULL))
    {
        f = r = n;
        r->next = f;
    }
    else
    {
        r->next = n;
        r = n;
        n->next = f;
    }
}

void dequeue()
{
    struct node* t;
    t = f;
    if((f==NULL)&&(r==NULL))
    printf("\nQueue is Empty");
    else if(f == r)
    {
        f = r = NULL;
        free(t);
    }
    else
    {
        f = f->next;
        r->next = f;
        free(t);
    }
}

void print()
{
    struct node* t;
    t = f;
    if((f==NULL)&&(r==NULL))
    printf("\nQueue is empty");
    else
    {
        do
        {
            printf("\n%d",t->data);
            t=t->next;
        } while (t != f);
        
    }
}

int main()
{
    int opt,age,data,n,i;
    char name,address;
    printf("Enter your choice:-");
    do
    {
        printf("\n\n1.Insert the Data in queue\n2.Show the Data in queue\n3.Delete the Data in queue\n4.Exit");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            printf("\nEnter the number of data");
            scanf("%d",&n);
            printf("\nEnter your data - ");
            i=0;
            while(i<n)
            {
                scanf("%d",&data);
                enqueue(data);
                i++;
            }
            break;

            case 2:
            print();
            break;

            case 3:
            print();
            break;

            case 4:
            print();
            break;

            default:
            printf("Incorrect Choice");
            break;
        }
    }while(opt!=5);
    return 0;
}