/*3. Write a program which accept one number from user and check whether
9th or 12th bit is on or off.
Input : 257
Output : TRUE*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL CheckBit(UINT ino)
{
    UINT imask1=0,imask2=0,result=0;
    imask1=0x00000100;
    imask1=0x00000800;
    
    if(ino&imask1 || ino&imask2)
        return TRUE;
    else
        return FALSE;
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