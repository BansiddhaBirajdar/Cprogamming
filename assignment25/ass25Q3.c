/*3. Accept Character from user and check whether it is digit or not(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Chkdigit(char ch)
{
// Apply condition to check whether it is alphabet or not.
    if(ch=='\0')
    {
        return -1;
    }


    if(ch >='0' && ch<='9')
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
    printf("\nCheck AlphaNumeric present or not");
    printf("\n Enter the character ::");
    scanf("%c",&cValue);
    bRet = Chkdigit(cValue);
    if(bRet == TRUE)
    {
        printf("\n It is Number ");
    }
    else
    {
        printf("\n It is not a Number ");
    }
    return 0;
}