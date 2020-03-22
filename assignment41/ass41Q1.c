/*1.Write a program which number from user and display below pattern.
Input : 7846
Output : 
* * * * * * *
* * * * * * * *
* * * *
* * * * * *
*/
#include<stdio.h>
void Dis(int ino)
{
    int digit=0,i=0;
    while(ino!=0)
    {
        digit=digit*10+(ino%10);
        ino/=10;
    }
    while(digit!=0)
    {
        for(i=0;i<digit%10;i++)
        {
            printf(" * ");
        }
        printf("\n");
        digit/=10;
    }
}

int main()
{
    int ino=0;
    printf("\nEnter the No::");
    scanf("%d",&ino);
    Dis(ino);
}