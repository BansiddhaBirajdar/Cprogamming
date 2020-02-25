/*4. Write a program which accepts N from user and print all odd numbers up to N.
Input : 18
Output : 1 3 5 7 9 11 13 */

#include<stdio.h>
int main()
{
	int ino=0,i=0;
	printf("\nEnter a no::");
	scanf("%d",&ino);
	for(i=1 ;i<ino;i++)

		if(i%2!=0)
		printf("%d ",i);
}
