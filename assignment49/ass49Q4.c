/*
4. Write a recursive program which accept number from user and return its
factorial.
Input : 5
Output : 120
*/
#include<stdio.h>
int dis(int ino)
{
    if(ino==0)
    return 1;
    else
    return ino*dis(ino-1);
}
int main()
{
    int ino=0;
    printf("\n Enter the ino :: ");
    scanf("%d",&ino);
    printf("\n Factorial %d ::%d",ino,dis(ino));
}