/*5. Accept N numbers from user and display summation of digits of each
number.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21*/
#include<stdio.h>
#include<malloc.h>
void DigitsSum(int Arr[], int iLength)
{
    int i=0,dsum=0,iNo=0;
    if(Arr==NULL||iLength<=0)
    {
        return -1;
    }
    for(i=0;i<iLength;i++)
    {
        iNo=Arr[i];
        while(iNo!=0)
        {
            dsum+=(iNo%10);
            iNo=iNo/10;
        }
        printf("\nArr[%d]::%d   digit sum is %d ",i+1,Arr[i],dsum);
        dsum=0;
    }

}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;
    printf("\n Enter number of elements::");
    scanf("%d",&iSize);
    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("\n Unable to allocate memory");
        return -1;
    }
    printf("\nEnter %d elements ::",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\n Enter element %d::",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    DigitsSum(p, iSize);
    free(p);
    return 0;
}