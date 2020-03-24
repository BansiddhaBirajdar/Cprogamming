/*1. Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully.*/
#include<stdio.h>
int main()
{
    char str[20];
    FILE *fp;
    printf("\n Enter file name ::");
    gets(str);
    fp=fopen(str,"r");
    if(fp==NULL)
    {
        printf("\n File cannot open");
    }
    else
    {
        printf("\n File opened successfully.");
    
    }
    fclose(fp);
}