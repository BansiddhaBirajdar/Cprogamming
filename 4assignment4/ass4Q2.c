/*2. Design application for income tax department to calculate tax amount. According to the
income tax department there is no income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20% tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax amount.
Input : 600000 Output : 10000 (0 + 10000)
Input : 450000 Output : 0
Input : 1200000 Output : 90000 (0 + 50000 + 40000)
Input : 8200000 Output : 2110000 (0 + 50000 + 200000 + 1860000)*/
#include<stdio.h>
float calTax(float salary)
{
	float total;
	if(salary<=0)
	{
		printf("\nplease check your salary");
		return -1;
	}
	else if(salary<=500000)
	{
		printf("\nyour income is 500000 less so we dont apply tax on you");
		return 0;
	}
	else if(salary>500000 && salary<=1000000)
	{
		total=salary-500000;
		return(total*10/100);
	}
	else if(salary>1000000 && salary<=2000000)
	{
	
		return (0+500000*10/100+(salary-1000000)*20/100);
	}
	else
	{
		return (0+500000*10/100+1000000*20/100+(salary-2000000)*30/100);	
	}
}
int main()
{
	float salary,tax;
	printf("\nAccording your salary apply a tax");
	printf("\nEnter the yout salary::");
	scanf("%f",&salary);
	tax=calTax(salary);
	printf("\n%f",tax);
}