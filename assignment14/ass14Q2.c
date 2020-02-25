/*2. Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #*/
#include<stdio.h>
void Pattern(int iNo)
{
	int i=0;
	if(iNo<0)
		iNo=-iNo;
	if(iNo==0)
		printf("\nEnter the Integer......");
	else
	{
		for(i=0;i<iNo;i++)
			printf(" %d #",i+1);
	}
}
int main()
{
int iValue = 0;
printf("\n Enter number of elements::");
scanf("%d",&iValue);
Pattern(iValue);
return 0;
}