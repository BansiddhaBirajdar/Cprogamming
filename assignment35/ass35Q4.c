/*
4. Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : FALSE
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL CheckBit(UINT ino,UINT ipos1,UINT ipos2)
{
    UINT imask1=0,imask2=0,result=0;
    imask1=0x00000001;
    imask2=0x00000001;
    imask1=imask1<<(ipos1-1);
    imask2=imask2<<(ipos2-1);
    //printf("%d %d",imask1,imask2);
    if(ino&imask1 || ino&imask2)
        return TRUE;
    else
        return FALSE;
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
    iResult=CheckBit(ino,ipos1,ipos2);
    if(iResult==FALSE)
        printf("Bit is off");
    else
        printf("Bit is on");
}