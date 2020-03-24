/*4.Write a recursive program which display below pattern.
Output : A B C D E F
*/
#include<stdio.h>
void Display()
{
    static int ino=0;
    static char ch='A';
    if(ino<6)
    {
        ino++;
        printf(" %c ",ch++);
        Display();
    }
}
int main()
{
    printf("\n OUTPUt ::");
    Display();
return 0;
}