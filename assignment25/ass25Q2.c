/*
2. Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkAlpha(char ch)
{
// Apply condition to check whether it is alphabet or not.
    if(ch=='\0')
    {
        return -1;
    }

    if(ch >='A' && ch<='Z' )
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
    printf("\nCheck Alphacharacter present or not");
    printf("\n Enter the character ::");
    scanf("%c",&cValue);
    bRet = ChkAlpha(cValue);
    if(bRet == TRUE)
    {
        printf("\n It is Character ");
    }
    else
    {
        printf("\n It is not a Character ");
    }
    return 0;
}