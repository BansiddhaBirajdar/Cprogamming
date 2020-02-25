/*2.Write a program which accept number from user and print numbers till that
number.
Input : 8
Output : 1 2 3 4 5 6 7 8*/
#include<stdio.h>
int main()
{
	int ino=0,i=0;
	printf("\nEnter a no::");
	scanf("%d",&ino);
	for(i=0;i<ino;i++)
		printf("%d ",i+1);

}