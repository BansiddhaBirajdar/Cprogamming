/*1. Accept N numbers from 85user and return frequency of even numbers.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 3*/
#include<stdio.h>
#include<malloc.h>
int CountEven(int Arr[], int iLength)
{
    int i=0,icount=0;
    if(Arr==NULL||iLength<=0)
    {
        return -1;
    }
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            icount++;
       }
    }
    return icount;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,i=0;
    int *p = NULL;
    printf("\n Enter number of elements::");
    scanf("%d",&iSize);
    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("\n Unable to allocate memory");
        return -1;
    }
    printf("\n Enter %d elements ",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element %d ::",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = CountEven(p, iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0;
}