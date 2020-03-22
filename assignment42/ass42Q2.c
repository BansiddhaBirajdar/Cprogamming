/*2. Write a program which search last occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.*/
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
    PNODE p=HEAD;
    
    while (p!=NULL)
    {
        printf("| %d |",p->data);
        p=p->next;
    }
    
}
int count()
{
    PNODE t=HEAD;
    int i=0;
    while(t!=NULL)
    {
        i++;
        t=t->next;
    }
    return i;
}
void LOccrance()
{
    int ino=0,ipos=0,f=0;
    PNODE p=HEAD;
    printf("Enter the no you wanna serach::");
    scanf("%d",&ino);
    while (p!=NULL)
    {
        if(p->data==ino)
        {
            ipos++;
            f=ipos;
            p=p->next;
        }
        else{
            ipos++;
            p=p->next;
        }
    }
    int t=count();
    printf("\n TOTALE NODE::%d",t);
    if(f)
    {
        printf("\n Your data present in %d ",f);
    }
    else
    {
        printf("\n Your data is not present in this linkedlist");
    }
    
    
}
int main()
{
    int no=0;
    while(1)
    {
        printf("\n case 1::Insert node");
        printf("\n case 2::Dispaly");
        printf("\n case 3::LastOccrance");
        printf("\n case 4::exit");
        printf("\n\n\n\t\tEnter the case::");
        scanf("%d",&no);
        switch (no)
        {
            case 1:Insert();
            break;
        
            case 2:Display();
            break;
        
            case 3:
                LOccrance();
            break;
            
            case 4:
                   exit(0) ;
        break;
        default:
        printf("please enter the currect case");
            break;
        }
    }
}
