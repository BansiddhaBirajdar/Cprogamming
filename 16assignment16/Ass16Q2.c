/*2. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : A B C D
a b c d
A B C D
a b c d*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	char Ch='A';
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		Ch='A';
		for(j=0;j<iCol;j++)
		{
			if((i%2)!=0)
				printf("\t%c",Ch);
			else
				printf("\t%c",(Ch+32));
			Ch++;

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