/*
2.Write a program which accept number from user and display its factors in
decreasing order.
Input  : 12
Output : 6 4 3 2 1
Input  : 13
Output : 1
Input  : 10
Output : 5 2 1 */
#include <stdio.h>
void MultFact(int iNo)
{
	int i=0;
	if(iNo<=0)
	{

		printf("\nPlease enter the positive no..");
		
	}
	else
	{
		for(i=iNo/2;i>=1;i--)
		{
			if(iNo%i==0)
			{
		       printf("%d\t",i);
			}
		}
		

	}

}
int main()
{
	int no=0;
	printf("\nEnter the no::");
	scanf("%d",&no);
	MultFact(no);
	//printf("\ntotal::%d",);
}