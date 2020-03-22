/*3. Write a program which accept one number from user and toggle 7th bit of
that number. Return modified number.
Input : 137
Output : 201*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0 
BOOL CheckBit(UINT ino)
{
    UINT imask=0,result=0;
    imask=0x00000040;
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