/*
1.Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.
Input : 10 2
Output : TRUE*/
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
    result=ino&imask;
    if(result==imask)
        return TRUE;
    else
        return FALSE;
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
    if(iResult==FALSE)
        printf("FALSE");
    else
        printf("TRUE");
}

