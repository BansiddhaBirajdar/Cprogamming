/* Write a recursive program which display below pattern.
Input : 6
Output : A B C D E F
*/

#include<stdio.h>
void dis(int ino)
{
    static char a='A';
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