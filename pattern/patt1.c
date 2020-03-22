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
	for(i=0;i<ino;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("* ");
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