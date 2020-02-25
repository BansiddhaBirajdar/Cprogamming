/*4. We have to design application for tourist company.
Tourist company provides cars on rent.
Depends on the running of car they apply rent.
If running is less than 100 kilometres then they charge 25 rupees per kilometre .
And if running is more than 100 kilometres then they apply 15 rupees per kilometre after
100 kilometres.
We have to accept number of kilometres from user and return the estimated rent.
Input : 73 Output : 1825
Input : 132 Output : 2980
Input : 189 Output : 3835*/
#include<stdio.h>
float disbill(float km)
{
	if(km<=0)
	{
		printf("\nCheck your km.?");
		return 0;
	}
	else if(km<=100)
	{
		return km*25;
	}
	else if(km>100)
	{
		return (100*25+(km-100)*15);
	}
}
int  main()
{
	float km=0.0;
	printf("\n---------the per km prices------");
	printf("\nEnter the km::");
	scanf("%f",&km);
	printf("\nBill::%f",disbill(km));

}