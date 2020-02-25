/*5.Write a program which accept number from user and count frequency of such a
digits which are less than 6.
Input : 2395
Output : 3
Input : 1018
Output : 3
Input : 9440
Output : 3
Input : 96672
Output : 1*/
#include<stdio.h>
void Count(int iNo)
{
	int iDigit = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	printf("\nOutput::");
	while(iNo !=0)
	{
		if(iNo%10<=6)
		{
			iDigit++;
		}

		iNo = iNo/10;
	}
	if(iDigit==0)
	{
		printf("\nThere is no digits less than 6");
	}
	else
	{
		printf("\nThere is %d digit less then 6 in  given number",iDigit);
	}
}
int main()
{
	int iValue = 0;
	printf("\n Enter number ::");
	scanf("%d",&iValue);
	Count(iValue);
	return 0;
}