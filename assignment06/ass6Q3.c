/*3. Write a program which accept two numbers and check whether numbers are
equal or not.
Input : 10 10
Output : Equal
Input : 10 12
Output : Not Equal
Input : 10 -10
Output : Not Equal*/
#include <stdio.h>
typedef int BOOL;
#define  TURE 1
#define FLASE 0
BOOL checkNoEquals(int ino1,int ino2)
{
	if(ino2==ino1)
		return TURE;
	else
		return FLASE;
}
int main()
{
	int ino1=0,ino2=0;
	BOOL check;
	printf("\nEnter the no1::");
	scanf("%d",&ino1);
	printf("\nEnter the no2::");
	scanf("%d",&ino2);
	check=checkNoEquals(ino1,ino2);
	if(check==TURE)
		printf("\nOutput::Equal");
	else
		printf("\nOutput::Not Equal");

}