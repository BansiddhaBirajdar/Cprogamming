/*3. Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output :
*/
#include<stdio.h>
#include<malloc.h>
void Dis(char *ch)
{
    char c=*ch;
    if(*ch=='\0')
        return ;
    printf("\n OutPut::");
    if(c>='a' && c<='z')
    {
        while(c<='z')
        {
            printf(" %c ",c++);
        }
    }
    else if(c>='A'&&c<='Z')
    {
        while(c<='Z')
        {
            printf(" %c ",c++);
        }
    }
    else
    {
        printf(" %c ",c);
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