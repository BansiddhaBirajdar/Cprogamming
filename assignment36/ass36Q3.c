
#include<stdio.h>
#include<malloc.h>
#include<string.h>
int count(char *str)
{
    int count=0,i=0;
    for(i=0;str[i]!='\0';i++)
        count++;
    return count;
}
void reverse(char *arr,int l,int h)
{
    while (l<h)
    {
        char t=arr[l];
        arr[l]=arr[h];
        l++;
        h--;
    }
    
}
void dis(char *arr)
{
    int l=strlen(arr),s=0;
    int m=32;
    for(int i=0;i<l;i++)
    {
        int k=(int)arr[i];
        if(k==m)
        {
            reverse(arr,s,i-1);
            s=i+1;
        }
    }
    printf("\n str ::%s ",arr);
    reverse(arr,s,l-1);
    printf("\n str2::%s",arr);
    reverse(arr,0,l-1);
}
int main()
{
    char arr[100],brr[100];
    int l=0,i=0,j=0;
    printf("\n Entet the string::");
    scanf("%[^\n]s",arr);
    printf("%s",arr);
    dis(arr);
    l=count(arr);
    printf("%d",l);
}
