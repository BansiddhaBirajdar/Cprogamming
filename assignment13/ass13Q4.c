/*4.Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864*/
#include <stdio.h>
int MultDigits(int iNo)
{
	int Mult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		if((iNo%10)!=0)
			Mult*=(iNo%10);
		
		iNo=iNo/10;
	}
	
	return Mult;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("\n Enter number::");
	scanf("%d",&iValue);
	iRet = MultDigits(iValue);
	printf("\nMultplication::%d",iRet);
return 0;
}