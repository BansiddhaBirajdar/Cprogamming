/*2. Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %
*/
#include<stdio.h>
#include<malloc.h>
void Dis(char *ch)
{
    if(*ch=='\0')
        return ;
    printf("\n OutPut::");
    if(*ch>='A'&&*ch<='Z')
        printf(" %c ",*ch+32);
    else if(*ch>='a'&& *ch<='z')
        printf(" %c ",*ch-32);
    else
        printf(" %c ",*ch);
}
int main()
{
    char *ch=NULL;
    ch=(char*)malloc(sizeof(char));
    printf("\nEnter the character::");
    scanf("%c",ch);
    Dis(ch);
}