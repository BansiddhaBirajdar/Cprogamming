/*3. Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3)*/

#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Check(int Arr[], int iLength)
{
    int i=0,iSmall=0,iMax=0;
    if(Arr==NULL||iLength<=0)
    {
        return -1;
    }
    iSmall=Arr[0];
    iMax=Arr[0];
    
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]<iSmall)
        {
            iSmall=Arr[i];
        }
        if(Arr[i]>iMax)
        {
            iMax=Arr[i];
        }
        
    }
    printf("imax=%d\nIsmall=%d\n",iMax,iSmall);
    return iMax-iSmall;

}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iData=0;
    int *p = NULL;
    int bRet = 0;
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
    printf("Difference between Max and small :: %d  ",bRet);
    free(p);
    return 0;
}