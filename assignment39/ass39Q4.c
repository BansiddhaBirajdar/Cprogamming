/*
4.Write a program which accept two strings from user and concat
alternate characters from second string at the end of first string.
Input : “Marvellous”
“Infosystems”
Output : MarvellousIfsses
*/
#include<stdio.h>
#include<stdlib.h>
int count(char *str)
{
    int count=0,i=0;
    for(i=0;str[i]!='\0';i++)
        count++;
    return count;
}
void Countlen(char *str1,char *str2)
{
    int strlen1=count(str1);
    int strlen2=count(str2);
    int i=0,j=0;
    i=strlen1;
    j=0;
    while(str2[j]!='\0')
    {
        str1[i++]=str2[j];
        j+=2;
    }
    str1[i]='\0';
    printf("\n str1 :: %s",str1);
}
int main()
{
    char str1[100],str2[100];
    printf("\nEnter the string1::");
    scanf("%[^\n]s",str1);
    fflush(stdin);
    printf("\nEnter the string2::");
    scanf("%[^\n]s",str2);
    Countlen(str1,str2);

}