/*3. Write a program which accept number from user and print its numbers line.
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4*/
#include<stdio.h>
int main()
{
	int ino=0,i=0;
	printf("\nEnter a no::");
	scanf("%d",&ino);
	for(i=(-ino-1);i<ino;i++)
		printf("%d ",i+1 );

}