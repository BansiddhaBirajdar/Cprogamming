/*2. Accept single digit number from user and print it into word.
Input : 9
Output : Nine
Input : -3
Output : Three
Input : 12
Output : Invalid Number */
#include<stdio.h>
void Display(int iValue)
{
	char digit[10][10]={"Zero","one","two","Three","four","five","six","seven","eight","nine"};
	if(iValue<0)
	{
		iValue=-iValue;
	}
	if(iValue>=10)
	{
		printf("\nInvalid no");
	}
	else
	{
		printf("%s\n",digit[iValue]);
	}
}
int main()
{
int iValue = 0;
printf("\nEnter number::");
scanf("%d",&iValue);
Display(iValue);
return 0;
}