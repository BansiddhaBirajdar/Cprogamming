/*2.Write a program which accept two strings from user and display
count of Capital characters from both the strings.
Input : “MarvelloUS”
“InfoSystEMs”
Output : 3 4*/
#include<stdio.h>
#include<stdlib.h>
int count(char *str)
{
    int count=0,i=0;
    for(i=0;str[i]!='\0';i++)
    {
            if(str[i]>='A' &&str[i]<='Z')
                count++;
    }
    return count;
}
void Countlen(char *str1,char *str2)
{
    printf("\n Stirng1 len::%d",count(str1));
    printf("\n Stirng2 len::%d",count(str2));
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