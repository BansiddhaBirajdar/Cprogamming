/*
4. Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#include<malloc.h>
void Dis(char *ch)
{
    
    if(*ch=='\0')
        return ;
    printf("\nOUTPUT::");
    if((*ch>='A'&&*ch<='Z')||(*ch>='a'&& *ch<='z')||(*ch>='0'&& *ch<='9'))
    {
        printf("FALSE");
    }
    else
    {
        printf("TRUE %c ",*ch);
    }
}
int main()
{
    char *ch=NULL;
    ch=(char*)malloc(sizeof(char));
    printf("\nEnter the character::");
    scanf("%c",ch);
    Dis(ch);
}