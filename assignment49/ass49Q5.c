/* Write a recursive program which accept number from user and return its
product of digits.
Input : 523
Output : 30
*/
#include<stdio.h>
int dis(int ino)
{
    if(ino==0)
        return 1;
    else
        return (ino%10)*dis(ino/10);
}
int main()
{
    int ino=0;
    printf("\n Enter the ino :: ");
    scanf("%d",&ino);
    printf("\n Product %d :: %d",ino,dis(ino));
}