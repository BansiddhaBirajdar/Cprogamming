/*
2. Write a recursive program which display below pattern.
Output : 1 2 3 4 5
*/
#include<stdio.h>
void Display()
{
    static int ino=0;
    if(ino<5)
    {
        ino++;
        printf(" %d ",ino);
        Display();
    }
}
int main()
{
    printf("\n OUTPUt ::");
    Display();
return 0;
}