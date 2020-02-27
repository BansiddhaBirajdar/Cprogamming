/*2. Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)*/
#include<stdio.h>
#include<malloc.h>
int CountEven(int Arr[], int iLength)
{
    int i=0,even=0,odd=0;
    if(Arr==NULL||iLength<=0)
    {
        return -1;
    }
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    return even-odd;
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