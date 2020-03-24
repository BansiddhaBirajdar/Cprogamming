/*
Write a recursive program which accept string from user and count number
of Captial characters.
Input : HElloWOrlD
Output : 8
*/
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int cap(char *str)
{
    static int i=0;
    if(*str>='A'&&*str<='Z')
        i++;
    if(*str !='0')
        return i;
    else
        return cap(str++);
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
    iret=cap(str);
    printf("captial::%d",iret);
    free(str);
}