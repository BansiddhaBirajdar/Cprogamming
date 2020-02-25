/* Design application for hotel. According to the management team of hotel they are giving
discount on total bill amount of customer.
If bill bill amount is less than 500 then there is no discount , if bill amount is less than 1500
and more than 500 they give 10% discount.
And if the bill amount is more than 1500 then they give 15% discount.
Our application should accept total bill amount and depends on the discount policy we have
to return the amount after applying discount.
Input : 1200  Output : 1080
Input : 290   Output : 290
Input : 3700  Output : 3145*/


#include<stdio.h>
float caldiscount(float iamount)
{
	float total;
	if(iamount<=0)
	{
		printf("\nplease check your amount");
		return -1;
	}
	if(iamount<=500)
	{
		printf("\nSorry you donot get discount\n");
		return iamount;
	}
	else if(500<iamount && iamount<=1500)
	{
		total=iamount-iamount*10/100;
		//printf("%f\n",total );
		return total;
	}
	else
	{
		total=iamount-iamount*15/100;
		return total;	
	}
}
int main()
{
	float iamount=0.0,ida=0.0;
	printf("According to yout amount you get discount");
	printf("\nEnter a amount::");
	scanf("%f",&iamount);
	ida=caldiscount(iamount);
	printf("\nyour tot amount is ::%f",ida);
	return 0;

}