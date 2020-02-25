/*1.Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3
Output : 88.2026
Input : 10.4
Output : 339.6224*/

#include<stdio.h>
#define PI 3.14
int main()
{
	float ivalue=0;
	printf("\nEnter the radius::");
	scanf("%f",&ivalue);
	printf("\ncalculate circle area is %f",(PI*ivalue*ivalue));
	return 0;
}