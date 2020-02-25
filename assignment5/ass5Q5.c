/*5.Write a program which accept number from user and return difference between
summation of all its factors and non factors.

Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37) */

#include<stdio.h>
int DiffFact(int iNo)
{
	int i=0,sum1=0,sum2=0;
	if(iNo<=0)
	{
		printf("\nPlease enter the positive no..");
		return 0;
	}
	else if(iNo==1)
	{
		return 1;
	}
	else
	{
		for(i=1;i<iNo;i++)
		{
			if(iNo%i==0)
				sum1+=i;
			else
				sum2+=i;
		}
		//pri
		ntf("sum1%d\nsum2%d",sum1,sum2);
		return sum1-sum2;
	}

}
int main()
{
	int no=0;
	printf("\nEnter the no::");
	scanf("%d",&no);
	printf("\n Total difference:: %d",DiffFact(no));
}