/*
1. Write a recursive program which display below pattern.
Output : * * * * *
*/
#include<stdio.h>
void Display()
{
    static int ino=0;
    if(ino<5)
    {
        printf(" * ");
        ino++;
        Display();
    }
}
int main()
{
    printf("\n OUTPUt ::");
    Display();
return 0;
}