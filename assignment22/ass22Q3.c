/*3. Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 11 is absent*/
#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[], int iLength,int iData)
{
    int i=0,icheck=0;
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
    if(bRet == TRUE)
    {
        printf("%d is present",iData);
    }
    else
    {
        printf("%d is absent",iData);
    }
    free(p);
    return 0;
}