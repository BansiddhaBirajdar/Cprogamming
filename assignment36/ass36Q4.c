/*
4. Accept sing from user and reverse the contents of that string by
toggling the case.
Input : “aCBdef”
Output : “FEDcbA”
*/
#include<stdio.h>
int count(char *str)
{
    int count=0,i=0;
    for(i=0;str[i]!='\0';i++)
        count++;
    return count;
}
int main()
{
    char arr[100],rev[100];
    int i=0,len=0;
    printf("\n Enter the string::");
    scanf("%[^\n]s",arr);
    len=count(arr);
    //printf("len::%c",arr[len-1]);
    len=len-1;
    while(len>=0)
    {
        if(arr[len]>='A' &&arr[len]<='Z')
            rev[i]=arr[len]+32;
        else
        {
            rev[i]=arr[len]-32;
        }
        len--;
        i++;
    }
    rev[i]='\0';
    printf("%s",rev);
}