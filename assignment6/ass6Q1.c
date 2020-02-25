/*1. Write a program which accept name from user and print that name.
Input  : Ganpati Bappa Morya
Output : Ganpati Bappa Morya
*/

#include<stdio.h>
int main()
{
	char str[50];
	printf("\nEnter a String::");
	//gets(str);
	scanf("%[^\n]s",str);

	puts(str);
}