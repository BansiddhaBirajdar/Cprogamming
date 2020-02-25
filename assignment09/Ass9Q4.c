/*4. Write a program to find odd factorial of given number.
Input : 5
Output : 15 (5 * 3 * 1)
Input : -5
Output : 15 (5 * 3 * 1)
Input : 10
Output : 945 (9 * 7 * 5 * 3 * 1) */
#include<stdio.h>
int oddFactorial(int iNo)
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
			if(i%2!=0)
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
iRet = oddFactorial(iValue);
printf("\nEven Factorial of number is %d",iRet);
return 0;
}