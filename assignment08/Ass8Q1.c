/*1. Write a program which accept number from user and if number is less than 50
then print small , if it is greater than 50 and less than 100 then print medium, if it is
greater than 100 then print large.
Input : 75
Output : Medium */
#include <stdio.h>
void Number(int iValue)
{
	if(iValue<=50)
		printf("\nSmall");
	else if(50<iValue && iValue <=100)
		printf("\nMedium");
	else
		printf("\nlarge");
}
int main()
{
	int iValue = 0;
	printf("\nEnter number::");
	scanf("%d",&iValue);
	Number(iValue);
	return 0;
}