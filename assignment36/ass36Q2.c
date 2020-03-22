/*2. Write a program which 2 strings from user and check whether
contents of two strings are equal or not. (Implement strcmp()
function).
Input : “Marvellous Infosystems”
“Marvellous Infosystems”
Output : TRUE*/
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
    int len1=0,len2=0,i=0,f=0;
    len1=count(str1);
    len2=count(str2);
    //printf("\nlen1::%d\n len2::%d",len1,len2);
    if(len1!=len2)
    {
        printf("FALSE");
        return;
    }
    else
    {
         
        while (str1[i]!='\0')
        {
            if(str1[i]!=str2[i])
            {
                f=1;
                break;
            }
            i++;
        }
        if(f)
        {
            printf("\nFALSE");
        }
        else
        {
            printf("\nTRUE");
        }
        
        
    }
   
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
}