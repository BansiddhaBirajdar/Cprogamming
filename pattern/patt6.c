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
	int i=0,j=0,k=1;
	for(i=0;i<ino;i++)
	{
		k=1;
		for(j=0;j<ino*2;j++)
		{
			if(j>=ino-i &&j<=ino+i &&k)
			{
				printf(" * ");
				k=0;
			}
			else
			{
				printf("   ");
				k=1;
			}
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