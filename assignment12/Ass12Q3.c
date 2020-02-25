/*3.Write a program which accept number from user and count frequency of 2 in it.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 9000
Output : 0
Input : 922432
Output : 3*/

#include<stdio.h>
void CheckDigit(int iNo,int iDigit)
{
	int count=0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	printf("\nOutput::");
	while(iNo !=0)
	{
		if(iNo%10==iDigit)
		{
			count++;
		}
		
		iNo = iNo/10;
	}
	if(count==0)
	{
		printf("\nThere is no %d this digit in number",iDigit);
	}
	else
	{
		printf("\nThere is %d time this  %d digit given number",count,iDigit);
	}
}
int main()
{
	int iValue = 0,iDigit=0;
	printf("\n Enter number ::");
	scanf("%d",&iValue);
	printf("\n Enter checking Digit ::");
	scanf("%d",&iDigit);
	CheckDigit(iValue,iDigit);
	return 0;
}