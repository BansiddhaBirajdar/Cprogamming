/*1.Write a program which accept number from user and return the count of even
digits.
Input : 2395
Output : 1
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 4*/
#include<stdio.h>
int CountEven(int iNo)
{
	int count=0,digits=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		digits=(iNo%10);
		if(digits%2==0)
			count++;
		iNo=iNo/10;
	}
	//printf("\nOutput::Even digits is %d",count);
	return count;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("\n Enter number ::");
	scanf("%d",&iValue);
	iRet = CountEven(iValue);
	printf("\nEven digits::%d",iRet);
	return 0;
}