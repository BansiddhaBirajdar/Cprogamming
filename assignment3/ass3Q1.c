/*1.Write a program which accept one number from user and print that number of
even numbers on screen.
Input : 7
Output: 2 4 6 8 10 12 14
*/

#include<stdio.h>
void printEven(int ino)
{
	int i=0;
	for(i=2;i<=ino*2;i+=2)
	{
		if(i%2==0)
		{
			printf("even::%d\n",i);
		}
}
int main()
{
	int ino=0;
	printf("\nEnter the no::");
	scanf("%d",&ino);
	printEven(ino);
}