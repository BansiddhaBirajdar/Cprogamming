#include <stdio.h>
void Dis(int ino){
	if(ino==0)
	{
		printf("\nenter +ve number..");
		return;
	}
	if(ino<0)
	{
		ino=-ino;
	}
	int i=0,j=0;
	for(i=ino;i>=0;i--)
	{
		for(j=0;j<ino;j++)
		{
			if(i>j)
			printf(" * ");
			else
			printf("   ");
		}
		printf("\n");
	}
}
int main()
{
	int ino=0;
	printf("\nEnter the no::");
	scanf("%d",&ino);
	Dis(ino);
}
/*
C:\Users\Bansiddha\Desktop\pattern>.\myexe

Enter the no::6
 *  *  *  *  *  *
 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *
*/