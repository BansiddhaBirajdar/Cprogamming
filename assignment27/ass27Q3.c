/*3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
Input : “MarvellouS”
Output : 6 (8-2)*/

#include<stdio.h>
int CountDiff(char *str)
{
    int iCnt = 0,icnt=0;
    if(str==NULL)
    {
        return -1;
    }
    while(*str != '\0')
    {
        
        if(*str>='a' && *str<='z')
        {
            icnt++;
        }
        else
        {
            iCnt++;
        }
        *str++;
    }
return icnt-iCnt;
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("\n Enter string:: ");
    scanf("%[^'\n']s",arr);
    iRet = CountDiff(arr);
    printf("\n No of Diff :: %d",iRet);
    return 0;
}