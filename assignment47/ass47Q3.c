/*3.Write a recursive program which display below pattern.
Output : 5 4 3 2 1*/
#include<stdio.h>
void Display()
{
    static int ino=5;
    if(ino>0)
    {
        
        printf(" %d ",ino);
        ino--;
        Display();
    }
}
int main()
{
    printf("\n OUTPUt ::");
    Display();
return 0;
}