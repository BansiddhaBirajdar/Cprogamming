/*1. Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)*/
#include<stdio.h>
#include<malloc.h>
int Difference(int Arr[], int iLength)
{
    int i=0,evensum=0,oddsum=0;
    if(Arr==NULL||iLength<=0)
    {
        return -1 ;
    }
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            evensum+=Arr[i];
        }
        else
        {
            oddsum+=Arr[i];
        }
        
    }
    return (evensum-oddsum);
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
    iRet = Difference(p, iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0;
}