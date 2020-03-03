/*5. Write a program which accept string from user reverse that string
in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”*/
#include<stdio.h>
#include<string.h>
void  StrReverse(char arr[])
{
    int i=0,l=0;
    l=strlen(arr);
    printf("\n OUTPUT :: ");
    for(i=l;i>=0;i--)
    {
        printf("%c",arr[i]);
    }
}
int main()
{
    char arr[20];
    printf("\n Enter string:: ");
    scanf("%[^'\n']s",arr);
    StrReverse(arr);
    return 0;
}