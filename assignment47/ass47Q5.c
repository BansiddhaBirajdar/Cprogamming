/*5.Write a recursive program which display below pattern.
Output : a b c d e f
*/
#include<stdio.h>
void Display()
{
    static int ino=0;
    static char ch='a';
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