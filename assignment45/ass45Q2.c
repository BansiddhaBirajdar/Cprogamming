/*
2. Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully.
*/
#include<stdio.h>
int main()
{
    char str[20];
    FILE *fp;
    printf("\n Enter file name ::");
    gets(str);
    fp=fopen(str,"w");
    if(fp==NULL)
    {
        printf("\n File cannot create");
    }
    else
    {
        printf("\n File create successfully.");
    
    }
    fclose(fp);
}