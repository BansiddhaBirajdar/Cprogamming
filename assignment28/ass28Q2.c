/*
2.Write a program which accept string from user and convert it into
upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS
*/
#include<stdio.h>
#include<string.h>
void Strlwrx(char *arr)
{
    if(arr==NULL)
    {
        return ;
    }
    int i=0;   
    int l=strlen(arr);
    printf("Ouput::");
    for(i=0;arr[i];i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')
        {
            arr[i]=arr[i]-32;
        }
    }
    printf("%s",arr);
}
int main()
{
    char arr[20];
    char *Rarr=NULL;
    printf("\n Enter string:: ");
    scanf("%[^'\n']s",arr);
    Strlwrx(arr);
    return 0;
}