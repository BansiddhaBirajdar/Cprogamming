/*3.Write a program which accept number from user and return the count of digits in
between 3 and 7.
Input : 2395
Output : 1
Input : 1018
Output : 0*/
#include<stdio.h>
int CountRange(int iNo)
{
	int count=0;
	while(iNo!=0)
	{
		if((iNo%10)>=3 && (iNo%10)<=7)
		{
			count++;
		}
		iNo=iNo/10;
	}
	return count;

}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("\n Enter number::");
	scanf("%d",&iValue);
	iRet = CountRange(iValue);
	printf("\n Count::%d",iRet);
	return 0;
}