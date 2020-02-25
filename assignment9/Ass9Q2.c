/*2. Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
Input : 10
Output : 700
Input : 3
Output : 270
Input : 1200
Output : 84000 */
#include<stdio.h>
int main()
{

	int iValue = 0;
	printf("\nEnter number::");
	scanf("%d",&iValue);
	printf("\nOutput::%d",iValue*70);
	return 0;
}
