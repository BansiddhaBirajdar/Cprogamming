 /*1.Write a program which accept number from user and print that number of $ & *
on screen.
Input : 5
Output : $ * $ * $ * $ * $ *
Input : 3
Output : $ * $ * $ *
Input : -3
Output : $ * $ * $ * */
#include<stdio.h>
int main()
{
	int ino=0,i=0;
	printf("\nEnter a no::");
	scanf("%d",&ino);
	for(i=0;i<ino;i++)
		printf("$ * ");

}