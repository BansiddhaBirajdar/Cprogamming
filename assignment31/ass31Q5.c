/*5. Write a program which accept string from user and copy that
characters of that string into another string by toggling the case.
Input : “Marvellous Python 2”
Output : “mARVELLOUS pYTHON 2”*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
void StrCpyCap(char arr[],char brr[])
{
    if(arr==NULL||brr==NULL)
    {
        return ;
    }
    int i=0,j=0,l=0;
    l=strlen(arr);
    for(i=0;i<l;i++)
    {
        if(arr[i]>='A'&&arr[i]<='Z')
        {
            
            brr[i]=arr[i]+32;
        }
        else if(arr[i]>='a'&&arr[i]<='z')
        {
            brr[i]=arr[i]-32;
        }
        else
        {
            brr[i]=arr[i];
        }
    }
    printf("\n output:: %s",brr);

}
int main()
{
    char *str=NULL;
    char *dest=NULL;
    int isize=0;
    printf("\n Enter the size of String::");
    scanf("%d",&isize);
    fflush(stdin);
    str = (char*)malloc(isize*sizeof(char));
    dest =(char*)malloc(isize*sizeof(char));
    printf("\nEnter the String::");
    scanf("%[^\n]s",str);
    StrCpyCap(str,dest);
    free(str);
    free(dest);
}