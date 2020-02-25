/*Write a program which accept total marks & obtained marks from user and
calculate percentage.
Input : 1000 745
Output : 74.5% */
#include<stdio.h>
float Percentage(int iValue1,int iValue2)
{
	
	if(iValue1<=0 ||iValue2<=0)
	{
		printf("\nPlease check your total marks or obtained marks.\n");
		return -1;
	}
	else
	{
		
		return(iValue2*100)/iValue1;
		
	}
}
int main()
{
int iValue1 = 0,iValue2 = 0;
float fRet = 0.0;
printf("Please enter total marks::");
scanf("%d",&iValue1);
printf("Please enter obtained marks::");
scanf("%d",&iValue2);
fRet =Percentage(iValue1,iValue2);
printf("\n Output::%f",fRet);
return 0;
}