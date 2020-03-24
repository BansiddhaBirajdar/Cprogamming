/*1. Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
*/
#include<stdio.h>
void dis(int ino)
{
    if(ino==0)
        return;
    else{
        printf(" %d *",ino);
        return dis(ino-1);
    }
}
int main()
{
    int ino=0;
    printf("\n enter the no:: ");
    scanf("%d",&ino);
    printf("\n Output :: ");
    dis(ino);
}