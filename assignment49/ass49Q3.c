/* Write a recursive program which accept string from user and count number of characters.
Input : Hello
Output : 5
*/
#include<stdio.h>
#include<string.h>
int dis(char *arr,int ino)
{
    static int count,l;
    if(arr[ino]>='A'&& arr[ino]<='Z' || arr[ino]>='a' && arr[ino]<='z')
    {
        printf("%c",arr[ino]);
        count++;
    }
    if(arr[ino]=='\0')
    {
        return count;
    }
    else
    {
        l++;
        dis(arr,l);
    }
    
    
}
int main()
{
    char arr[20];
    printf("\n Enter the string :: ");
    scanf("%[^\n]s",arr);
    printf("\n No of character %d ",dis(arr,0));
}