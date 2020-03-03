#include<stdio.h>
#include<string.h>
int indexOfSubstring(char str[],char s[])
{
    int i=0,j=0,k=0,l=0;
    l=strlen(s);
    for(i=0;str[i+l-1];i++)
    {
        k=i;
        for(j=0;j<=l-1;j++)
        {
            if(str[k]!=s[j])
            break;
            k++;
        }
        if(j==l)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int index=0;
    index=indexOfSubstring("adadadaaaabbaaaaaaabababa","aabb");
    if(index ==-1)
    {
        printf("subtring not found");
    }
    else
    {
        printf("subtring found %d ",index);
    }
    
}