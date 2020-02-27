/*
Accept N numbers from user and return product of all odd elements.
Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45
Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0
*/
#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Check(int Arr[], int iLength)
{
    int i=0,iProduct=1;
    if(Arr==NULL||iLength<=0)
    {
        return -1;
    }
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2!=0)
        {
            iProduct*=Arr[i];
        }

    }
    return iProduct;

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
    
    bRet = Check(p, iSize);
    if(bRet!=1)
    {
        printf("Product is %d ",bRet);
    }
    else
    {
        printf("Product is nothing no odd no.s");
    }
    free(p);
    return 0;
}