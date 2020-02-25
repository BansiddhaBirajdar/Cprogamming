/*4. Write a program which accept three numbers and print its multiplication.
Input : 5 4 7
Output : 140
Input : 5 0 7
Output : 35
Input : 5 0 0
Output : 5
Input : 0 0 0
Output : 0*/
#include<stdio.h>
int main()
{
	int ino1=0,ino2=0,ino3=0,total=0;
	printf("\nMultiplication of three no.....");
	printf("\nEnter the no1::");
	scanf("%d",&ino1);
	printf("\nEnter the no2::");
	scanf("%d",&ino2);
	printf("\nEnter the no3::");
	scanf("%d",&ino3);
	total=ino1*ino2*ino3;
	printf("\nOutput::%d",total);
	
}