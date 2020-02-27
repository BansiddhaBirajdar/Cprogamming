/*Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 66 76 88
Input : N : 6
Start: 30
End : 50
Elements : 85 66 3 76 93 88
Output :
*/
#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

void Range(int Arr[], int iLength,int iStart,int iEnd)
{
    int i=0,j=0;
    if(Arr==NULL||iLength<=0)
    {
        printf("\nsome Input errors.");
        return ;
    }
    printf("\n OUTPUT :: ");
    for(i=0;i<iLength;i++)
    {
        if(iStart<=Arr[i]&&Arr[i]<=iEnd)
        {
            j=1;
            printf(" %d ",Arr[i]);
        }
    }
    if(j==0)
    {
        printf("There no such element in this range");
    }

}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iStart=0,iEnd=0;
    int *p = NULL;
    BOOL bRet = FALSE;
    printf("\n Enter number of elements::");
    scanf("%d",&iSize);
    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("\n Unable to allocate memory");
        return -1;
    }
    printf("\nEnter %d elements ",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\n Enter element %d::",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    printf("\n Enter number of ISTART ::");
    scanf("%d",&iStart);
    printf("\n Enter number of IEND ::");
    scanf("%d",&iEnd);
    Range(p, iSize,iStart,iEnd);
    free(p);
    return 0;
}