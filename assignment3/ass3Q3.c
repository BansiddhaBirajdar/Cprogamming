/*3. Write a program which accept number from user and print even factors of that
number.
Input : 36
Output: 2 4 6 12 18*/
#include<stdio.h>
void PrintEvenFac(int ino)
{
	int i=0;
	for(i=2;i<ino;i+=2)
	{
		if(ino%i==0)
		{
			printf("%d\t",i);
		}
	}
}
int main()
{
	int ino=0;
	printf("\nEnter the no::");
	scanf("%d",&ino);
	PrintEvenFac(ino);
}