/*3. Write a program which accept string from user and display it inn
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
*/
#include<stdio.h>
#include<string.h>
void ReverseStr(char arr[])
{
    
    int i=0;   
    int l=strlen(arr);
    printf("Ouput::");
    for(i=l;i>=0;i--)
    {
        printf("%c",arr[i]);
    }
}
int main()
{
    char arr[20];
    char *Rarr=NULL;
    printf("\n Enter string:: ");
    scanf("%[^'\n']s",arr);
    ReverseStr(arr);
    
    return 0;
}