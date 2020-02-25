/*2. Write a program which accept one number from user and check whether that
number is greater than 100 or not.
Input : 101
Output : Greater
Input : 39
Output : Smaller*/
#include<stdio.h>
int main()
{
	int ino=0;
	printf("\nEnter the no::");
	scanf("%d",&ino);
	if(ino<=100)
	{
		printf("\nOutput::Smaller");

	}
	else
	{
		printf("\nOutput::Greater");
	}
}