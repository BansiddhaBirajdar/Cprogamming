/*5. Write a program which accept number from user and display its table in reverse
order.
Input : 2
Output : 20 18 16 14 12 10 8 6 4 2
Input : 5
Output : 50 45 40 35 30 25 20 15 10 5
Input : -5
Output : 50 45 40 35 30 25 20 15 10 5 */
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
		for(i=10;i>=1;i--)
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