/*5.Write a program which accept two strings from user and concat
second string at the end of first string in reverse order.
Input : “Marvellous” “Python”
Output : MarvellousnohtyP */
#include<stdio.h>
#include<stdlib.h>
char arr[20];
int count(char *str)
{
    int count=0,i=0;
    for(i=0;str[i]!='\0';i++)
        count++;
    return count;
}
char* revStr(char *str)
{
    
    int len=count(str);
    int i=0,j=0;
    for(i=len-1;i>=0;i--)
    {
        arr[j++]=str[i];

    }
    arr[j]='\0';
    return arr;
}
void Countlen(char *str1,char *str2)
{
    char *revstr=revStr(str2);
    //printf("%s",revstr);
    int strlen1=count(str1);
    int strlen2=count(str2);
    int i=0,j=strlen1;
    while(revstr[i]!='\0')
    {
        str1[j]=revstr[i];
        j++;
        i++;
    }
    str1[j]='\0';
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
/*
PS D:\C program\assignment39> .\myexe

Enter the string1::bansi

Enter the string2::Birajdar

 str1 :: bansiradjariB
*/