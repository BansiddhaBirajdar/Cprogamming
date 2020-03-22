/* Write a program which accept string from user and copy the
contents into another string by removing extra white spaces.*/

#include<stdio.h>
#include<stdlib.h>
int count(char *str)
{
    int count=0,i=0;
    for(i=0;str[i]!='\0';i++)
        count++;
    return count;
}
char* revWhitespace(char *str)
{
    int len=count(str);
    printf("len=%d",len);
    char arr[100];
    int i=0,j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            arr[j]=str[i];
            j++;
        }
        if(str[i]==' '&&str[i+1]!=' ')
        {
                arr[j]=str[i];
                j++;
        }
    }
    arr[j]='\0';
    i=0;
    if(arr[0]==' ')
    {
        while(arr[i]!='\0')
        {
            arr[i]=arr[i+1];
            i++;
        }
         arr[i]='\0';
    }
    int len1=count(arr);
    if(arr[len1-1]==' ')
    {
        arr[len1-1]=arr[len1];
    }
    int len2=count(arr);
    printf("\narr=%s len2=%d",arr,len2);
}
int main()
{
    char str1[100],str2[100];
    char *str=NULL;
    printf("\nEnter the string1::");
    scanf("%[^\n]s",str1);
    str=revWhitespace(str1);
    printf(" Remove white space::%s",str);

}