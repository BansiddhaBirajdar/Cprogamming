/*5. Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20*/

#include<stdio.h>
int main()
{
	int ino=0,i=0,j=1;
	printf("\nEnter a no::");
	scanf("%d",&ino);
	for(i=1;i<=10;i++)
	{
		printf("%d ",ino*i);
	}
}