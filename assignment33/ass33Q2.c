/*2. Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number.
Input : 577
Output : 1*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL CheckBit(UINT ino)
{
    UINT imask1=0,result=0,imask2=0;
    imask2=0x00000040;
    imask1=0x00000200;
    if(ino&imask1)
        ino=ino^imask1;
    if(ino&imask2)
        ino=ino^imask2;
        
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