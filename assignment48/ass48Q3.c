/*
3.Write a recursive program which display below pattern.
Input : 5
Output : 5 4 3 2 1
*/
#include<stdio.h>
void dis(int ino)
{
    if(ino>0)printf(" %d ",ino);
        dis(ino-1);
    
}
int main()
{
    int ino=0;
    printf("\n Enter the no :: ");
    scanf("%d",&ino);
    dis(ino);

}