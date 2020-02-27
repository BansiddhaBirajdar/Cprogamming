/*1. Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.*/
#include<stdio.h>
void DisplayASCII()
{
    int i=0;
    printf("\n Dic Hex oct char");
    for(i=0;i<=255;i++)
    {
        printf("\n %d %0x %o %c",i,i,i,i);
    }
}
int main()
{
    DisplayASCII();
    return 0;
}