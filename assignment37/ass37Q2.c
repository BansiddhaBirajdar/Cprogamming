/*
2. Write a program which accept string from user and return length of
largest word.
Input : “Marvellous Multi OS Infosystems”
Output : 11
*/

#include<stdio.h>
#include<stdlib.h>
void Dis(char *str)
{
    int i=0,max=0,temp=0;
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            temp++;
        }
        if(str[i]==' ')
        {
            if(temp>max)
            {
                max=temp;
            }
            temp=0;
        }
        i++;
        if(str[i]=='\0')
        {
            if(temp>max)
            {
                max=temp;
            }
        }
        
    }
    printf("\n MAX=%d",max);

}
int main()
{
    char str1[100],str2[100];
    printf("\nEnter the string1::");
    scanf("%[^\n]s",str1);
    Dis(str1);

}