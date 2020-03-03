/*
1.Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
e
Output : TRUE
Input : “Marvellous Multi OS”
W
Output : FALSE
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    BOOL check=FALSE;
    while(*str!='\0')
    {
        if(*str ==ch)
        {
            check=TRUE;
            break;
        }
        *str++;
    }
    return check;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;
    printf("\n Enter string :: ");
    scanf("%[^'\n']s",arr);
    fflush(stdin);
    printf("\n Enter the character :: ");
    scanf("%c",&cValue);
    bRet = ChkChar(arr, cValue);
    if(bRet == TRUE)
    {
        printf("\n Character found ");
    }
    else
    {
        printf("\n Character not found ");
    }
    return 0;
}