/*
4. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 5
Output : 
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	
	int i=0,j=0;
	for(i=iRow;i>0;i--)
	{
		
		for(j=0;j<iCol;j++)
		{
			printf("\t%d",i);
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