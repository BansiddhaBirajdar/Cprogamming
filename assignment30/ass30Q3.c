/*3. Write a program which accept string from user and copy capital
characters of that string into another string.
Input : “Marvellous Multi OS”
Output : “MMOS”*/
#include<stdio.h>
void StrCpyCap(char *src, char *dest)
{
    if(src==NULL)
    {
        return ;
    }
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <='Z'))
        {
            *dest = *src;
            *dest++;
        }
        *src++;
    }
    *dest='\0';

}
int main()
{
    char arr[30] = "MarvelLOus";
    char brr[30]; // Empty string 
    StrCpyCap(arr,brr);
    printf("%s",brr); 
    return 0;
}