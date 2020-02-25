/*
2. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output : 
2 4 6 8 10
1 3 5 7 9
2 4 6 8 10
1 3 5 7 9
*/
#include <stdio.h>
void Pattern(int iRow, int iCol)
{
	int count=0,i=0,j=0;
	for(i=0;i<iRow;i++)
	{
		if(i%2==0)
		{
			count=0;
			for(j=0;j<iCol;j++)
			{
				printf(" %d ",count+=2);
			}
		}
		else
		{
			count=-1;
			for(j=0;j<iCol;j++)
			{
				printf(" %d ",count+=2);
			}
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
