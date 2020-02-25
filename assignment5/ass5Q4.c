/*4.Write a program which accept number from user and return summation of all its
non factors.
Input : 12
Output : 50
Input : 10
Output : 37*/

#include<stdio.h>
int SumnonFact(int iNo)
{
	int i=0,sum=0;
	if(iNo<=0)
	{
		printf("\nPlease enter the positive no..");
		return 0;
	}
	else
	{
		for(i=1;i<iNo;i++)
		{
			if(iNo%i!=0)
			{
		       sum+=i;
			}
		}
		return sum;

	}

}
int main()
{
	int no=0;
	printf("\nEnter the no::");
	scanf("%d",&no);
	printf("\nTotal sum of non factors number::%d",SumnonFact(no));
}