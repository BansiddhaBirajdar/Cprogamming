/*5. Accept string from user and check whether the string is palindrome
or not without considering its case.
Input : “1abccBA1”
Output : TRUE*/
#include<stdio.h>
int count(char *str)
{
    int count=0,i=0;
    for(i=0;str[i]!='\0';i++)
        count++;
    return count;
}
int main()
{
    char arr[100],rev[100];
    int i=0,len=0,j=0,f=0;
    printf("\n Enter the string::");
    scanf("%[^\n]s",arr);
    len=count(arr);
    while(arr[i]!='\0')
    {
        if(arr[i]>='0' &&arr[i]<='9')
            rev[i]=arr[i];
        else if(arr[i]>='A' && arr[i]<='Z')
            rev[i]=arr[i]+32;
        else
        {
            rev[i]=arr[i];
        }
        
        i++;
    }
    i=0;
    j=len-1;
    for(i=0;i<j;i++,j--)
    {
        if(rev[i]!=rev[j])
        {
            f=1;
            break;
        }
    }
    if(f)
    printf("\nFALSE");
    else
    {
        printf("TRUE");
    }
    
}