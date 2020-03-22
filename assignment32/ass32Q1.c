/*1.Write a program which checks whether 15th bit is On or OFF.*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL CheckBit(UINT ino)
{
    UINT imask=0,result=0;
    imask=0x00004000;
    result=ino&imask;
    if(result==0)
        return FALSE;
    else
        return TRUE;
}
int main()
{
    UINT ino=0;
    BOOL iResult=FALSE;
    printf("\n Enter the no=");
    scanf("%u",&ino);
    iResult=CheckBit(ino);
    if(iResult==FALSE)
        printf("Bit is off");
    else
        printf("Bit is on");
}