/*4.Write a program which number from user and display below pattern.
Input : 7846
Output : 
7 # # # # # # #
8 # # # # # # # #
4 # # # #
6 # # # # # #
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
        printf("%d",digit%10);
        for(i=digit%10;i>0;i--)
        {
            printf(" # ");
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