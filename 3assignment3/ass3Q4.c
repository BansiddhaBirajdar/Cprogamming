/*4. Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d */
#include<stdio.h>
void DisplayConvert (char CValue)
{
	if('a'<=CValue && CValue<='z')
	{

		char a=CValue-32;
		
		printf("After convert::%c",a);
	}
	else if('A'<=CValue && CValue<='Z')
	{
		char a=CValue+32;
		printf("After convert::%c",a);
	}
}
int main()
{
	char cValue = '\0';
	printf("Enter character::");
	scanf("%c",&cValue);
	DisplayConvert(cValue);
	return 0;
}