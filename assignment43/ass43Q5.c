/*1. Write a program which displays all elements which are perfect from singly
linear linked list.
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28*/

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
    printf("\n---------------------------------------------------------------------------");
    int d=0,ch=0;
    PNODE rear , new_node;
    do{
        new_node=(PNODE)malloc(sizeof(NODE));
        printf("\n Enter the data::");
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
    printf("\n---------------------------------------------------------------------------");
printf("\n");
}
void Display()
{
    printf("\n Display ");
    printf("\n---------------------------------------------------------------------------\n");
    if(HEAD==NULL)
    {
        printf("LINKEDLIST EMPTY");
        return;
    }
    PNODE p=HEAD;
    while (p->next!=NULL)
    {  
        printf("| %d |->",p->data);
        p=p->next;
    }
    printf("| %d |",p->data);
    printf("\n---------------------------------------------------------------------------\n");
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
int digit(int ino)
{
    int isum=0;
    if(ino<0)
    {
        ino=-ino;
    }
    while(ino!=0)
    {
        isum=isum+(ino%10);
        ino/=10;
    }
    return isum;
}
void prefectNo()
{
    printf("\n++++++++++++++++++ PREFACT NO ++++++++++++++++++++\n");
    int i=0,ino=0,isum=0;
    PNODE p=HEAD;
    if(HEAD==NULL)
    {
        printf("LINKEDLIST EMPTY");
        return;
    }
    while (p!=NULL)
    {
            isum=0;
            ino=p->data;
            for(i=1;i<=ino-1;i++)
            {
                if(ino%i==0)
                    isum+=i;
            }
            if(ino==isum)
                printf(" %d ",ino);
            p=p->next;
    }
    
}
int main()
{
    int no=0,c=0;
    while(1)
    {
        printf("\n---------------------------------------------------------------------------");
        printf("\n case 1::Insert node");
        printf("\n case 2::Dispaly");
        printf("\n case 3::prefect Data");
        printf("\n case 4::count");
        printf("\n case 5::exit");
        printf("\n---------------------------------------------------------------------------");
        printf("\n\n\n\t\tEnter the case::");
        scanf("%d",&no);
        switch (no)
        {
            case 1:Insert();
            break;
        
            case 2:Display();
            break;
        
            case 3:
                prefectNo();
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