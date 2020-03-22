/*2.Write a program which number from user and display below pattern.
Input : 7846
Output : 
* * * * * *
* * * *
* * * * * * * *
* * * * * * *
*/
#include<stdio.h>
void Dis(int ino)
{
    int digit=0,i=0;
    if(ino==0)
    {
        printf("\n Enter the +ve number");
        return;
    }
    if(ino<0)
    {
        ino=-ino;
    }
    while(ino!=0)
    {
        for(i=0;i<ino%10;i++)
        {
            printf(" * ");
        }
        printf("\n");
        ino/=10;
    }
}

int main()
{
    int ino=0;
    printf("\nEnter the No::");
    scanf("%d",&ino);
    Dis(ino);
}