/*Write a recursive program which accept number from user and return
largest digit
Input : 87983
Output : 9*/
#include<stdio.h>
int L(int ino)
{
    static int l=0;
    if(ino%10>l)
    {
        l=ino%10;
    }
    if(ino!=0)
    return l;
    else
    return L(ino/10);
}
int main()
{
    int ino=0,ians;
    printf("\nEnter the no::");
    scanf("%d",&ino);
    ians=L(ino);
    printf("%d",ians);
}