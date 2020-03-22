/*4.Write a program which number from user and display below pattern.
Input : 7846
Output : 
7
7 8
7 8 4
7 8 4 6
Solution :*/
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
int revDigit(int ino)
{
    int rev=0;
    while(ino!=0)
    {
        rev=rev*10+(ino%10);
        ino/=10;
    }
    return rev;
}
void Display(int ino)
{
    if(ino==0)
    {
        printf("\n Enter the positive number");
        return ;
    }
    int i=0,isize=0,j=0,t=0,rev=0;
    isize=countDigit(ino);
    rev=revDigit(ino);
    for(i=0;i<isize;i++)
    {
        t=rev;
        for(j=0;j<=i;j++)
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
    char arr[10];
    printf("\n Enter the Number ::");
    scanf("%d",&ino);
    
    Display(ino);
}