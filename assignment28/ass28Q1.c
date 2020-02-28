/*1.Write a program which accept string from user and convert it into
lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os
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
        if(arr[i]>='A'&&arr[i]<='Z')
        {
            arr[i]=arr[i]+32;
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