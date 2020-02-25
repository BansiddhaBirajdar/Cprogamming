/*4. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : 
1 2 3 4 5
-1 -2 -3 -4 -5
1 2 3 4 5
-1 -2 -3 -4 -5
1 2 3 4 5
*/
#include <stdio.h>
void Pattern(int iRow, int iCol)
{
	int count=0,i=0,j=0;
	
	for(i=0;i<iRow;i++)
	{
		if(i%2==0)
		{
			count=1;
			for(j=0;j<iCol;j++)
			{
				printf(" %d ",count++);
			}
		}
		else
		{
			count=0;
			for(j=0;j<iCol;j++)
			{
				printf(" %d ",count+=-1);
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