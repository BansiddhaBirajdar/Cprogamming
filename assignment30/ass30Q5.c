/*5. Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).
Input : “Marvellous Infosystems”
“Logic Building”
Output : “Marvellous Infosystems Logic Building”*/
#include<stdio.h>
void StrCatX(char *str, char * dest)
{
    if(str==NULL&&dest==NULL)
    {
        return;
    }
    while(*str !='\0' )// Traverse first string till end
    {
        *str++;
    }
    *str++=' ';
    while(*dest != '\0') // Copy contents of destination in source
    {
        *str=*dest;
        *str++;
        *dest++;
    }
  //  *str = '\0';
}
int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";
    StrCatX(arr,brr);
    printf("%s",arr); // Marvellous Infosystems Logic Building
    return 0;
}