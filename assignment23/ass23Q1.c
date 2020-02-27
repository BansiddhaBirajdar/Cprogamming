/*1. Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : FALSE*/
#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
//liner seraching also we called.................
int Check(int Arr[], int iLength,int iData)
{
    int i=0,icheck=0;
    if(Arr==NULL||iLength<=0)
    {
        return -1;
    }
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==iData)
        {
            icheck=1;
        }

    }
    return icheck;

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
        printf("Given %d is present ",iData);
    }
    else
    {
        printf("Given %d is Not present ",iData);
    }
    free(p);
    return 0;
}
