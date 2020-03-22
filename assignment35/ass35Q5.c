/*
5. Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879.
*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
void CheckBit(UINT ino,UINT ipos1,UINT ipos2)
{
    UINT imask1=0,imask2=0,result=0,imask=0;
    imask1=0xFFFFFFFF;
    imask2=0xFFFFFFFF;
    imask1=imask1<<(ipos1-1);
    imask2=imask2>>(32-ipos2);
    imask=imask1&imask2;
    printf("OUTPUT::%u",ino^imask);
}
int main()
{
    UINT ino=0,ipos1=0,ipos2=0;
    BOOL iResult=FALSE;
    printf("\n Enter the no=");
    scanf("%u",&ino);
    printf("\n Enter the Position1=");
    scanf("%u",&ipos1);
    printf("\n Enter the Position2=");
    scanf("%u",&ipos2);
    CheckBit(ino,ipos1,ipos2);
    
}