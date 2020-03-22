/*
2. Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
void CheckBit(UINT ino1,UINT ino2)
{
    UINT imask=0,result=0;
    imask=0x00000001;
    int i=0;
    for(i=1;i<32;i++)
    {
        if(ino1&imask && ino2&imask)
        {
            printf(" %d ",i);
        }
        imask=imask<<1;
    }
}
int main()
{
    UINT ino1=0,ino2=0;
    UINT iResult=0;
    printf("\n Enter the no1=");
    scanf("%u",&ino1);
    printf("\n Enter the no2=");
    scanf("%u",&ino2);
    CheckBit(ino1,ino2);
    
}