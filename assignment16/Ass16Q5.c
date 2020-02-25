/*5. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 4
Output : 
1 2 3 4
5 6 7 8
9 10 11 12*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int no=1;
	int i=0,j=0;
	for(i=0;i<iRow;i++)
	{

		for(j=0;j<iCol;j++)
		{
			printf("\t%d",no++);
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