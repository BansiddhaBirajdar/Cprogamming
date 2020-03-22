/*
3. Write a program which returns addition of all element from singly linear
linked list.
Function Prototype :
int Addition( PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output : 100
*/
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;
PNODE HEAD=NULL;
void Insert()
{

    int d=0,ch=0;
    PNODE rear , new_node;
    do{
        new_node=(PNODE)malloc(sizeof(NODE));
        printf("\n enter the data::");
        scanf("%d",&d);
        new_node->data=d;
        new_node->next=NULL;
        
        if(HEAD ==NULL)
        {
            HEAD =new_node;
        }
        else if(HEAD->next==NULL)
        {
            HEAD->next=new_node;
        }
        else
        {
            rear=HEAD;
            while (rear->next!=NULL)
            {
                rear=rear->next;
            }
            rear->next=new_node;
            
        }
        printf("\nDo you wish to continue[1/0]:");
        scanf("%d",&ch);
    }while (ch !=0);
printf("\n");
}
void Display()
{
    if(HEAD==NULL)
    {
        printf("LINKEDLIST EMPTY");
        return;
    }
    PNODE p=HEAD;
    while (p!=NULL)
    {
        printf("| %d |",p->data);
        p=p->next;
    }
    
}
int count()
{
    if(HEAD==NULL)
    {
        printf("LINKEDLIST EMPTY");
        return 0;
    }
    PNODE t=HEAD;
    int i=0;
    while(t!=NULL)
    {
        i++;
        t=t->next;
    }
    return i;
}
void Sum()
{
    int ino=0,ipos=0,sum=0;
    PNODE p=HEAD;
    if(HEAD==NULL)
    {
        printf("LINKEDLIST EMPTY");
        return;
    }
    while (p!=NULL)
    {
            sum+=p->data;
            p=p->next;
    }
    printf("\n Addition of all data::%d",sum);
}
int main()
{
    int no=0,c=0;
    while(1)
    {
        printf("\n case 1::Insert node");
        printf("\n case 2::Dispaly");
        printf("\n case 3::Sum");
        printf("\n case 4::count");
        printf("\n case 5::exit");
        printf("\n\n\n\t\tEnter the case::");
        scanf("%d",&no);
        switch (no)
        {
            case 1:Insert();
            break;
        
            case 2:Display();
            break;
        
            case 3:
                Sum();
            break;
            case 4:
                    c=count();
                    printf("\n total node::%d ",c);
            break;
            case 5:
                    printf("\n+++++++++++++++++ THANK YOU +++++++++++++++++++\n");
                    exit(0) ;
            break;
        default:
        printf("please enter the currect case");
            break;
        }
    }
}

