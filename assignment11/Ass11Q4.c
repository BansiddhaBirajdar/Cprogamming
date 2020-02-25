/*4.Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 108
Input : 10 18
Output : 70
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range*/
#include<stdio.h>
void sumEvenRangeDisplay(int iStart , int iEnd)
{
	int i=0,sum=0;
	if(iStart>iEnd||iStart<0||iEnd<0)
	{
		printf("\nInvalid Range.......");
	}
	else
	{
		printf("\nOutput::");
		for(i=iStart;i<=iEnd;i++)
		{
			if(i%2==0)
			sum+=i;
		}

			printf("%d ",sum);
	}

}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("\n Enter starting point::");
	scanf("%d",&iValue1);
	printf("\n Enter ending point::");	
	scanf("%d",&iValue2);
	sumEvenRangeDisplay(iValue1, iValue2);
	return 0;
}