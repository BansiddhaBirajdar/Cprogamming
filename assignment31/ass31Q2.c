/*2. Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.
Input : “Marvel lous Pyth on”
Output : “MarvellousPython”*/
#include<stdio.h>
void StrCpyX(char *arr,char *brr)
{
    if(arr==NULL || brr ==NULL)
    {
        return ;
    }
    while(*arr!='\0')
    {
        if(*arr!=' ')
        {
            *brr=*arr;
            *brr++;
        }
        *arr++;
    }
}
int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30]; // Empty string
    StrCpyX(arr,brr);
    printf("%s",brr); // MarvellousPython
    return 0;
}