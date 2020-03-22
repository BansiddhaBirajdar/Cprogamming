/*1.Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
Input : 79
Output : 15*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL CheckBit(UINT ino)
{
    UINT imask=0,result=0;
    imask=0x00000040;
    if(ino&imask)
        ino=ino^imask;
    
    return ino;
}
int main()
{
    UINT ino=0;
    UINT iResult=0;
    printf("\n Enter the no=");
    scanf("%u",&ino);
    iResult=CheckBit(ino);
    printf("\n Output:: %d",iResult);
}