/*3. Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 3
Input : N : 6
NO: 93
Elements : 85 66 3 66 93 88
Output : 4
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1*/

#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Check(int Arr[], int iLength,int iData)
{
    int i=0,icheck=-1;
    if(Arr==NULL||iLength<=0)
    {
        return -1;
    }
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==iData)
        {
            icheck=i;
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
    if(bRet!=-1)
    {
        printf("Given %d is present at %d position ",iData,bRet+1);
    }
    else
    {
        printf("Given %d is Not present ",iData);
    }
    free(p);
    return 0;
}