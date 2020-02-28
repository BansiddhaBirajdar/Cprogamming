/*
4. Write a program which accept string from user and display only
digits from that string.
Input : “marve89llous121”
Output : 89121
Input : “Demo”
Output :
*/
#include<stdio.h>
#include<string.h>
void Strlwrx(char *arr)
{
    if(arr==NULL)
    {
        return ;
    }
    int i=0;   
    int l=strlen(arr);
    printf("Ouput::");
    for(i=0;arr[i];i++)
    {
        if(arr[i]>='0'&&arr[i]<='9')
        {
            printf("%c",arr[i]);
        }
    }
    
}
int main()
{
    char arr[20];
    char *Rarr=NULL;
    printf("\n Enter string:: ");
    scanf("%[^'\n']s",arr);
    Strlwrx(arr);
    return 0;
}