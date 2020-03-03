/*3.Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 1
Input : “Marvellous Multi OS”
W
Output : NOT FOUND
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int ChkChar(char *str, char ch)
{
    int check=0;
    while(*str!='\0')
    {
        if(*str ==ch)
        {
            check++;
            break;
        }
        ++check;
        *str++;
    }
    return check;
}

int main()
{
    char arr[20];
    char cValue;
    int bRet = 0;
    printf("\n Enter string :: ");
    scanf("%[^'\n']s",arr);
    fflush(stdin);
    printf("\n Enter the character :: ");
    scanf("%c",&cValue);
    bRet = ChkChar(arr, cValue);
    if(bRet)
    {
        printf("\n Character Position is %d ",bRet);
    }
    else
    {
        printf("\n Character Position not found  ");
    }
    return 0;
}