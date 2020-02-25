/*1.Write a program which accept number from user and display below pattern.
Input : 5
Output : * * * * * # # # # #
Input : 6
Output : * * * * * * # # # # # # #
Input : -5
Output : * * * * * # # # # #
Input : 2
Output : * * # # */
#include<stdio.h>
void display(int ino)
{
	int i=0,total=1;
	if(ino<0)
	{
		ino=-ino;
	}
	if(ino==0)
	{
		printf("\ninvalid no...");
	}
	else
	{
		for(i=0;i<ino;i++)
		{
			printf("* ");
		}
		for(i=0;i<ino;i++)
		{
			printf("# ");
		}

	}
}
int main()
{
	int iValue = 0;
	printf("\nEnter number::");
	scanf("%d",&iValue);
	display(iValue);
	return 0;
}