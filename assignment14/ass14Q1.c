/*1. Accept number from user and display below pattern.
Input : 5
Output : A B C D E
*/
#include<stdio.h>
void Pattern(int iNo)
{
	char A='A';
	int i=0;
	if(iNo<0)
		iNo=-iNo;
	if(iNo==0)
		printf("\nEnter the Integer......");
	else
	{
		for(i=0;i<iNo;i++)
		{
			if(A=='Z')
			{
				A='A';
			}
			printf("%c ",A++);
		}
	}

}
int main()
{
	int iValue = 0;
	printf("\n Enter number of elements ::");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}