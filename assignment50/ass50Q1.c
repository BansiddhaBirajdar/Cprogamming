/*
1. Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
int countWhitespace(char *str)
{
    int count=0;
    while(*str!='\0')
    {
        if(*str ==' ')
            count++;
        *str++;
    }
    return count;
}
int main()
{
    char *str;
    int isize=0,iret=0;
    printf("\n Enter the string size::");
    scanf("%d",&isize);
    fflush(stdin);
    str=(char*)malloc(isize*sizeof(char));
    printf("\n Enter the string::");
    scanf("%[^\n]s",str);
    iret=countWhitespace(str);
    printf("WHitespace of given string is %d",iret);
    free(str);
}