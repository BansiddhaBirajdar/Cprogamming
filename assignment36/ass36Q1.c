/*1. Write a program which accepts 2 strings from user and concat N
characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then
concat whole string after first string.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count(char *str)
{
    int count=0,i=0;
    for(i=0;str[i]!='\0';i++)
        count++;
    return count;
}
void StrCon(char *str1,char *str2)
{
    printf("\nstr1::%s",str1);
    printf("\nstr2::%s",str2);
    int len1=0,len2=0,i=0,j=0;
    len1=count(str1);
    len2=count(str2);
    printf("\nlen1::%d\n len2::%d",len1,len2);
    while (str1[i]!='\0')
    {
        i++;
    }
    str1[i]=' ';
    printf("%d",count(str1));
    while (str2[j]!='\0')
    {
        i++;
        str1[i]=str2[j];
        j++;
    }
    str1[i]='\0';
    printf("\nstr::%d",count(str1));
    printf("\n str::%s",str1);
}
int main()
{
    char str1[100],str2[100];
    fflush(stdin);
    printf("Enter the string1::");
    scanf("%[^\n]s",str1);
    fflush(stdin);
    printf("Enter the string2::");
    scanf("%[^\n]s",str2);
    StrCon(str1,str2);
    //free(str1);
    //free(str2);
}