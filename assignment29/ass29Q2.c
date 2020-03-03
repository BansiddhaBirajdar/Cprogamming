/*2.Write a program which accept string from user and accept one
character. Return frequency of that character.
Input : “Marvellous Multi OS”
M
Output : 2
Input : “Marvellous Multi OS”
W
Output : 0*/

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
            
        }
        *str++;
    }
    return check;
}

int main()
{
    char arr[20];
    char cValue;
    int iocc=0;
    printf("\n Enter string :: ");
    scanf("%[^'\n']s",arr);
    fflush(stdin);
    printf("\n Enter the character :: ");
    scanf("%c",&cValue);
    iocc = ChkChar(arr, cValue);
    if(iocc)
    {
        printf("\n Character Occ ::%d ",iocc);
    }
    else
    {
        printf("\n Character not Occ. ");
    }
    return 0;
}