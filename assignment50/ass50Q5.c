/*
5. Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325
*/
#include<stdio.h>
#include<math.h>
int L(int ino)
{
    int digit=(int)log10(ino);
    if(ino==0) 
        return 0;
    else
    {
        return (ino%10*pow(10,digit)+L(ino/10));
    }
    
}
int main()
{
    int ino=0,ians;
    printf("\nEnter the no::");
    scanf("%d",&ino);
    ians=L(ino);
    printf("Output::%d",ians);
}