/*4. Write a program which accept string from user and check whether
it contains vowels in it or not.
Input : “Pooja”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE*/
#include<stdio.h>
void CheckVowel(char* arr)
{
    int icheck=0;
    if(arr==NULL||*arr=='\0')
    {
        return ;
    }
    while (*arr!='\0')
    {
        if(*arr=='a'||*arr=='e'||*arr=='i'||*arr=='o'||*arr=='u'||*arr=='A'||*arr=='E'||*arr=='I'||*arr=='O'||*arr=='U')
            {
                icheck=1;
                break;
            }
            *arr++;
    }
    if(icheck)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    


}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("\n Enter string:: ");
    scanf("%[^'\n']s",arr);
    CheckVowel(arr);
    return 0;
}
