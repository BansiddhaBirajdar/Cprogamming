/*1. Write a program which accept string from user and copy that
characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM”*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
void StrCpyX(char *str,char *dest)
{
    if(str==NULL  ||dest==NULL)
    {
        return ;
    }

    int i=0,j=0;
    j=strlen(str);
    for(i=j;i>=0;i--)
    {
        dest[j-i]=str[i];
        
    }
    *dest++='\0';
    printf("\nAfter reverse the string:: %s",dest);

    

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
    StrCpyX(str,dest);
    free(str);
    free(dest);
}