/*
5. Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)

*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL CheckBit(UINT ino)
{
    UINT imask=0,result=0;
    imask=0xF000000F;
    return ino^imask;
}
int main()
{
    UINT ino=0,ipos;
    BOOL iResult=FALSE;
    printf("\n Enter the no=");
    scanf("%u",&ino);
    iResult=CheckBit(ino);
    printf("\nOutput::%d",iResult);
}