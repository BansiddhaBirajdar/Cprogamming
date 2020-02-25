/*5. Write a program which returns difference between Even factorial and odd factorial
of given number.
Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15)
Input : 10
Output : 2895 (3840 - 945)*/
#include<stdio.h>
int DiffFactorial(int iNo)
{
	int i=0,total1=1,total2=1;
	if(iNo<0)
		iNo=-iNo;
	if(iNo==0)
		return 1;
	else
	{
		for(i=1;i<=iNo;i++)
		{
			if(i%2==0)
			{
				total1*=i;
			}
			else
			{
				total2*=i;
			}
		}
		return total1-total2;
	}
}
int main()
{
int iValue = 0,iRet = 0;
printf("\nEnter number::");
scanf("%d",&iValue);
iRet = DiffFactorial(iValue);
printf("\nEven Factorial of number is %d",iRet);
return 0;
}