/*5. Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16*/

#include <stdio.h>
void Dis(int iNo)
{
	int i=0;
	printf("\nOutput::");
	for(i=2;i<=iNo*2;i+=2)
		printf("\t%d",i);
}
int main()
{
	int iValue = 0;
	printf("\n Enter number of elements::");
	scanf("%d",&iValue);
	Dis(iValue);
	return 0;
}