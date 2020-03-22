/*
1.Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.
Input : 11
Output : 3
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL CheckBit(UINT ino)
{
    UINT imask=0,result=0;
    imask=0x00000001;
    int i=0,count;
    for(i=1;i<32;i++)
    {
        if(ino&imask)
        {
            count++;
        }
        imask=imask<<1;
    }
    return count;
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