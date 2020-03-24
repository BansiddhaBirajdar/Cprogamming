/* Write a recursive program which accept number from user and return summation of its digits.
Input : 879
Output : 24*/
#include<stdio.h>
int dis(int ino)
{
    if(ino==0)
    return 0;
    else
    {
        return ino%10+dis(ino/10);
    }
    
}
int main()
{
    int ino=0;
    printf("\n enter the no:: ");
    scanf("%d",&ino);
    printf("\n Output :: %d",dis(ino));

}