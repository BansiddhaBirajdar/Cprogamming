/*5.Write a recursive program which display below pattern.
Input : 6
Output : a b c d e f
*/

#include<stdio.h>
void dis(int ino)
{
    static char a='a';
    if(ino>0)printf(" %c ",a++);
        dis(ino-1);
    
}
int main()
{
    int ino=0;
    printf("\n Enter the no :: ");
    scanf("%d",&ino);
    dis(ino);

}