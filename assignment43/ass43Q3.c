/*2. Write a program which displays all elements which are prime from singly
linear linked list.*/
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
#include<math.h>
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
int checkprime(int ino)
{
    printf("\n ++++++++++++PRIME NO+++++++++++++\n");
    int i=0,q=0;
    if(ino<0)
    {
        ino=-ino;
    }
    if(ino==0||ino==1)
    {
        return 0;
    }
    else
    {
        if(ino==2 ||ino==3)
            return 1;
        q=sqrt(ino);
        for(i=2;i<=q;i++)
        {
            if(ino%i==0)
            {
                break;
            }
        }
        if(i-1==q)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
    
}
void PrimeData()
{
    int ino=0,ipos=0,max=0,f;
    PNODE p=HEAD;
    if(HEAD==NULL)
    {
        printf("LINKEDLIST EMPTY");
        return;
    }
    while (p!=NULL)
    {
            if(checkprime(p->data))
                printf(" %d\t",p->data);
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
        printf("\n case 3::Prime Data");
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
                PrimeData();
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