/*5. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 
1 2 3 4
1 * * 4
1 * * 4
1 2 3 4
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i=0,j=0;
    if(iRow<=0||iCol<=0)
    {
        printf("\n Enter the rows and col Positive no");
        return ;
    }
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(j==0||j==(iCol-1)||i==0||i==(iRow-1))
            {
                printf(" %d ",j+1);
            }
            else
            {
                printf(" @ ");
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