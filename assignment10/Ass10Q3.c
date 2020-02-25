/*3. Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
Input : 5
Output : 5000
Input : 12
Output : 12000*/

#include<stdio.h>
int KMtoMeter(int ino)
{
	return (ino*1000);
}
int main()
{
int iValue = 0, iRet = 0;
printf("\nEnter distance::");
scanf("%d",&iValue);
iRet = KMtoMeter(iValue);
printf("Output::%d",iRet);
return 0;
}