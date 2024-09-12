#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node*next;
    struct node*prev;
}node;

typedef node*nodep;

void print_topDown(nodep current,nodep head);
void print_bottomUp(nodep current,nodep tail);
//void add();
//void add_top();
void add_index(nodep*head);

int main()
{
    nodep head=NULL;
    nodep tail,current;
    printf("nodes in c\n");
    printf("***********\n");
    int num;
    printf("how many nums would you like:");
    scanf("%d",&num);
    int i;
    for(i=0;i<num;i++)
    {
        tail=(nodep)malloc(sizeof(node));
        printf("enter a number:");
        scanf("%d",&tail->num);
        tail->next=NULL;
        if(head==NULL){
            head=tail;
            tail->prev=NULL;
        }
        else
        {
            tail->prev=current;
            current->next=tail;
        }
        current=tail;
    }
    print_topDown(current,head);
    add_index(&head);
    printf("***************\n");
    print_bottomUp(current,tail);
    //free variables
    current=head;
    while(current!=NULL)
    {
        tail=current;
        current=current->next;
        free(tail);
    }

    return 0;
}

void print_topDown(nodep current,nodep head)
{
    //read from top-down
    current=head;
    while(current!=NULL)
    {
        printf("contents:%d\n",current->num);
        current=current->next;
    }
   
}

void print_bottomUp(nodep current,nodep tail)
{
    
    current=tail;
    while(current!=NULL)
    {
        printf("contents:%d\n",current->num);
        current=current->prev;
    }

}

void add_index(nodep*head)
{
    int index;
    printf("enter the index:");
    scanf("%d",&index);
    printf("wich number would you like to enter in the list:");
    int num;
    nodep current=*head;
    nodep temp=(nodep)malloc(sizeof(node));
    scanf("%d",&temp->num);
    if(index==1)
    {
        current->prev=temp;
        temp->next=*head;
        *head=temp;
        temp->prev=NULL;
        
    }
    else
    {
        int i;
        for(i=0;i<index;i++)
        {
            current=current->next;
        }
        temp->prev=current->prev;
        current->prev=temp;
        temp->next=current;
    }
}
