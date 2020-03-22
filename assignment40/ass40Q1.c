/*1.Write a program which number from user and display below pattern.
Input : 7846
Output : 
6 4 8 7
6 4 8 7
6 4 8 7
6 4 8 7 */
#include<stdio.h>
int countDigit(int ino)
{
    int count=0;
    while(ino!=0)
    {
        count++;
        ino/=10;
    }
    return count;
}

void Display(int ino)
{
    if(ino==0)
    {
        printf("\n Enter the positive number");
        return ;
    }
    int i=0,isize=0,j=0,t=0;
    isize=countDigit(ino);
    for(i=0;i<isize;i++)
    {
        t=ino;
        for(j=0;j<isize;j++)
        {
            printf(" %d ",t%10);
            t/=10;
        }
        printf("\n");
    }

}
int main()
{
    int ino=0;
    printf("\n Enter the Number ::");
    scanf("%d",&ino);
    Display(ino);
}