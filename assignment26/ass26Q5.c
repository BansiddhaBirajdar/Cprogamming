/*
5. Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65
         Octal 0101
         Hexadecimal 0X41
*/

#include<stdio.h>
#include<malloc.h>
void Dis(char *ch)
{
    char i= *ch;
    printf("\n character:: %c\n Decimal:: %d\n Octal:: 0%o\n Hexadecimal :: 0x%0x ",i,i,i,i);

}

int main()
{
    char *ch=NULL;
    ch=(char*)malloc(sizeof(char));
    printf("\nEnter the character::");
    scanf("%c",ch);
    Dis(ch);
}