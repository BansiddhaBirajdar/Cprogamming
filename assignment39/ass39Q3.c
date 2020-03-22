/*3.Write a program which accept two strings from user and check
whether both the strings are equal or not without considering its
case.
Input : “MarvelloUS”
“MARveLLous”
Output : TRUE
Solution :*/

#include<stdio.h>
#include<stdlib.h>
int count(char *str)
{
    int count=0,i=0;
    for(i=0;str[i]!='\0';i++)count++;
    return count;
}
void Countlen(char *str1,char *str2)
{
    int slen1=count(str1);
    int slen2=count(str2);
    if(slen1!=slen2)
    {
        printf("Both Stirng Are difference");
        return;
    }
    int i=0,j=0,check=0;
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
        {
            //printf("%d",str1[i]);
            str1[i]=str1[i]+32;
        }
        if(str2[i]>='A' && str2[i]<='Z')
        {
            //printf("%d",str2[i]);
            str2[i]=str2[i]+32;
        }
        if(str1[i]!=str2[i])
        {
            check=1;
            break;
        }
    }
    if(check)
    {
        printf("NOT EQUAL");
    }
    else
    {
        printf("EQUAL");
    }
    
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