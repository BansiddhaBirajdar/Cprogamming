/*2. Write a recursive program which display below pattern.
Input : 5
Output : 1 2 3 4 5
*/
#include<stdio.h>
void dis(int ino)
{
    if(ino>1)
    {
        dis(ino-1);
        printf(" %d ",ino);
    }
}
int main()
{
    int ino=0;
    printf("\n Enter the no :: ");
    scanf("%d",&ino);
    dis(ino);

}