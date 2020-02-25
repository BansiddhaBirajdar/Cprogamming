/*3.Write a program to find even factorial of given number.
Input : 5
Output : 8 (4 * 2)
Input : -5
Output : 8 (4 * 2)
Input : 10
Output : 3840 (10 * 8 * 6 * 4 * 2)*/
#include<stdio.h>
int EvenFactorial(int iNo)
{
	int i=0,total=1;
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
				total*=i;
			}
		}
		return total;
	}
}
int main()
{
int iValue = 0,iRet = 0;
printf("\nEnter number::");
scanf("%d",&iValue);
iRet = EvenFactorial(iValue);
printf("\nEven Factorial of number is %d",iRet);
return 0;
}