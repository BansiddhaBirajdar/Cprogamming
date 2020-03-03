/*4.Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 11
Input : “Marvellous Multi OS”
W
Output : -1
Input : “Marvellous Multi OS”
e
Output : 4*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int ChkChar(char str[], char ch)
{
    int check=-1,i=0;
    int l=strlen(str);
    for(i=l;i>0;i--)
    {
        if(str[i] == ch)
        {
            check=i;
            break;
        }
    
    }
    return check+1;
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