/*1.Write a program which accept number from user and display its multiplication of
factors.
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
Input : 13
Output : 1 (1)
Input : 10
Output : 10 (1 * 2 * 5)*/
#include<stdio.h>
int MultFact(int iNo)
{
	int i=0,total=1;
	if(iNo<=0)
	{
		printf("\nPlease enter the positive no..");
		return 0;
	}
	else
	{
		for(i=1;i<=iNo/2;i++)
		{
			if(iNo%i==0)
			{
		       printf("%d\n",i);
				total=total*i;
			}
		}
		return total;

	}

}
int main()
{
	int no=0;
	printf("\nEnter the no::");
	scanf("%d",&no);
	printf("\ntotal::%d",MultFact(no));
}