/*
3.Write a program which accept number from user and display all its non factors.
Input : 12
Output : 5 7 8 9 10 11
Input : 13
Output : 2 3 4 5 6 7 8 9 10 11 12
Input : 10
Output : 3 4 6 7 8 9 */
#include<stdio.h>
void DisnonFact(int iNo)
{
	int i=0;
	if(iNo<=0)
	{
		printf("\nPlease enter the positive no..");
	}
	else
	{
		for(i=1;i<iNo;i++)
		{
			if(iNo%i!=0)
			{
		       printf("%d\n",i);
			}
		}

	}

}
int main()
{
	int no=0;
	printf("\nEnter the no::");
	scanf("%d",&no);
	DisnonFact(no);
}