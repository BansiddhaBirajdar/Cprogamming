/*5.Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output : 
m a r v e l l o u s
m a r v e l l o u s
m a r v e l l o u s
m a r v e l l o u s
m a r v e l l o u s
m a r v e l l o u s
m a r v e l l o u s
m a r v e l l o u s
m a r v e l l o u s
m a r v e l l o u s*/

#include<stdio.h>
#include<stdlib.h>
int count(char *str)
{
    int count=0,i=0;
    for(i=0;str[i]!='\0';i++)
        count++;
    return count;
}
void Dis(char *str1)
{
    char *str=str1;
    int len=count(str1);
    int i,j=len;
    while (len>=0)
    {
        for(i=0;i<j;i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            printf("%c ",str[i]+32);  
            else
            printf("%c ",str[i]);
        }
        printf("\n");
        len--;
    }
}
int main()
{
    char str1[100],str2[100];
    printf("\nEnter the string1::");
    scanf("%[^\n]s",str1);
    Dis(str1);

}