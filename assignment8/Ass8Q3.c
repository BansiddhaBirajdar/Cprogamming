/*3.Write a program to find factorial of given number.
Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : -5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : 4
Output : 24 (4 * 3 * 2 * 1) */
#include <stdio.h>
int Factorial(int ino)
{
	int i=0,total=1;
	if(ino<0)
	{
		ino=-ino;
	}
	if(ino==0)
	{
		return 1;
	}
	else
	{
		for(i=ino;i>=1;i--)
		{
			total *=i;
		}
	}

}

int main()
{
int iValue = 0,iRet = 0;
printf("\n Enter number ::");
scanf("%d",&iValue);
iRet = Factorial(iValue);
printf("\nFactorial of number is %d",iRet);
return 0;
}