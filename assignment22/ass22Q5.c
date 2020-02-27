/*
5. Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0
*/
#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Check(int Arr[], int iLength,int iData)
{
    int i=0,icheck=0;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==iData)
        {
            return i;
        }

    }

}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iData=0;
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
    printf("\n Enter number of serach ::");
    scanf("%d",&iData);
    bRet = Check(p, iSize,iData);
    if(bRet)
    {
        printf("Given %d is present %d Position",iData,bRet);
    }
    else
    {
        printf("Given %d is present %d Position",iData,bRet);
    }
    free(p);
    return 0;
}
