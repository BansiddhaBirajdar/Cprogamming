/*2. Write a program which accept number from user and print even factors of that
number.
Input : 24
Output: 1 2 4 6 8 12
*/
#include<stdio.h>
void DisplayFactor(int ino)
{
	int i=0;
	for(i=1;i<=ino;i++)
	{
		if(ino%i=0)
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
	DisplayFactor(ino);
}