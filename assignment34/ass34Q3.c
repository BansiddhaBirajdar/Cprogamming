/*
3. Write a program which accept one number and position from user and on
that bit. Return modified number.
Input : 10 3
Output : 14
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL CheckBit(UINT ino,UINT ipos)
{
    UINT imask=0,result=0;
    if(ipos<1||ipos>31)
    {
        return FALSE;
    }
    imask=0x00000001;
    imask=imask<<(ipos-1);
    if(ino&imask)
        return ino;
    return ino|imask;
}
int main()
{
    UINT ino=0,ipos;
    BOOL iResult=FALSE;
    printf("\n Enter the no=");
    scanf("%u",&ino);
    printf("\n Enter the Position=");
    scanf("%u",&ipos);
    iResult=CheckBit(ino,ipos);
    printf("\nOutput::%d",iResult);
}