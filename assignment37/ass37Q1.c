/*1.Write a program which accept string from user count number of
words from string
Input : “Marvellous Multi OS”
Output : 3
Input : “ Marvellous Multi OS Pune”
Output : 4*/

#include<stdio.h>
#include<stdlib.h>
int count(char *str)
{
    int count=0,i=0;
    for(i=0;str[i]!='\0';i++)
        count++;
    return count;
}
void Dis(char *str1)
{
    int i=0,count=0;
    while (str1[i]!='\0')
    {
        if(str1[i]==' ')
        {
            count++;
        }
        i++;
    }
    printf("NUM Of Space ::%d",count+1);
}
int main()
{
    char str1[100],str2[100];
    printf("\nEnter the string1::");
    scanf("%[^\n]s",str1);
    Dis(str1);

}
