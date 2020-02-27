/*
2. Accept N numbers from user and display all such elements which are
divisible by 5.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 85 80 */
#include<stdio.h>
#include<malloc.h>
void Dis(int Arr[],int ilength)
{
    int i=0;
    if(Arr==NULL||ilength<=0)
    {
        return ;
    }
    printf("\nOutput:: ");
    for(i=0;i<ilength;i++)
    {
        if(Arr[i]%5==0)
            printf(" %d ",Arr[i]);
    }
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
    Dis(p, iSize);
    free(p);
    return 0;
}