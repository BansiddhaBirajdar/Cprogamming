/*2.Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero*/

#include<stdio.h>
void CheckZero(int iNo)
{
	int iDigit = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	printf("\nOutput::");
	while(iNo !=0)
	{
		if(iNo%10==0)
		{
			iDigit++;
		}
		
		iNo = iNo/10;
	}
	if(iDigit==0)
	{
		printf("\nThere is no Zero");
	}
	else
	{
		printf("\nThere is %d Zero in  given number",iDigit);
	}
}
int main()
{
	int iValue = 0;
	printf("\n Enter number ::");
	scanf("%d",&iValue);
	CheckZero(iValue);
	return 0;
}