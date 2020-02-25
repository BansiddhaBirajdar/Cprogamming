/*4.Write a program which accept number from user and display its table.
Input : 2
Output : 2 4 6 8 10 12 14 16 18 20
Input : 5
Output : 5 10 15 20 25 30 35 40 45 50
Input : -5
Output : 5 10 15 20 25 30 35 40 45 50 */
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
		for(i=1;i<=10;i++)
		{
			printf(" %d ",ino*i);
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