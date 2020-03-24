/*Write a recursive program which accept number from user and return
smallest digit
Input : 87983
Output : 3*/
#include<stdio.h>
int L(int ino,int e)
{
    if(ino==0)
    return e;
    if(e>ino%10)
        e=ino%10;
    L(ino/10,e);
}
int main()
{
    int ino=0,ians;
    printf("\nEnter the no::");
    scanf("%d",&ino);
    ians=L(ino,9);
    printf("Output::%d",ians);
}