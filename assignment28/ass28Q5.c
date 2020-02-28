/*
5. Write a program which accept string from user and count number of
white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5
*/
#include<stdio.h>
#include<string.h>

void  StrWhiteSpace(char *arr)
{
    
    if(arr==NULL)
    {
        return ;
    }
    int i=0,icount=0;
    int l=strlen(arr);
    for(i=0;arr[i];i++)
    {
        if(arr[i]==' ')
        {
            icount++;
        }
    }
    printf("No WhiteSpace is %d ",icount);
}
int main()
{
    char arr[20];
    printf("\n Enter string:: ");
    scanf("%[^'\n']s",arr);
    StrWhiteSpace(arr);
    return 0;
}