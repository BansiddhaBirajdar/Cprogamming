/*
4. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 6 iCol = 6
Output : 
* * * * * *
* *       *
*   *     *
*     *   *
*       * *
* * * * * *
*/

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i=0,j=0;
    if(iRow!=iCol)
    {
        printf("\n Enter the both equals rows and col ");
        return ;
    }
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(j==i||j==0||i==(iRow-1)||i==0||j==(iCol-1))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
            
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("\n Enter number of rows and columns ::");
    scanf("%d %d",&iValue1, &iValue2);
    Pattern(iValue1, iValue2);
    return 0;
}