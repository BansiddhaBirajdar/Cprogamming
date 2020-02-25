/*
2. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 3
Output : 
1 2 3
1 2 3
1 2 3
1 2 3
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	if(iRow<0 && iCol<0)
	{
		printf("\nEnter a positive no....");
		return ;
	}

	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf(" %d ",j+1);
		}
		printf("\n");
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("\n Enter number of rows and columns::");
	scanf("%d %d",&iValue1, &iValue2);
	Pattern(iValue1, iValue2);
	return 0;
}