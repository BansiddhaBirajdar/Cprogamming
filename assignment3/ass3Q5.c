/*5. Accept on character from user and check whether that character is vowel
(a,e,i,o,u) or not.
Input : E Output : TRUE
Input : d Output : FALSE*/


#include <stdio.h>
typedef int BOOL;
# define TRUE 1
# define FALSE 0
BOOL ChkVowel ( char ch)
{
	if(ch>='A'&&ch<='Z')
		ch=ch+32;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	printf("\nEnter character::");
	scanf("%c",&cValue);
	bRet =ChkVowel(cValue );
	if (bRet == TRUE)
	{
		printf("You entered character %c is Vowel",cValue);
	}
	else
	{
		printf("You entered charater %c is not Vowel",cValue);
	}
	return 0;
}