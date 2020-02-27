/*4. Accept N numbers from user and display all such numbers which contains
3 digits in it.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 665 953 858
*/
#include<stdio.h>
#include<malloc.h>
void CheckDigits(int Arr[], int iLength)
{
    int i=0,icheck=0,iNo=0;
    if(Arr==NULL||iLength<=0)
    {
        return -1;
    }
    printf("\n OUTPUT::");
    for(i=0;i<iLength;i++)
    {
        iNo=Arr[i];
        while(iNo!=0)
        {
            icheck++;
            iNo=iNo/10;
        }
        if(icheck==3)
        {
            printf(" %d ",Arr[i]);
        }
        icheck=0;
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
    CheckDigits(p,iSize);
    free(p);
    return 0;
}