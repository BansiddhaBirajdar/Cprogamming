/*5. Write application which accept file name from user and one string from user. Write
that string at the end of file.
Input : Demo.txt
Hello World
Output : Write Hello World at the end of Demo.txt file*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],ch[100];
    FILE *fp;
    int size=0,i=0;
    printf("\n Enter file name ::");
    gets(str);
    fp=fopen(str,"w");
    if(fp==NULL)
    {
        printf("\n File cannot open");
    }
    else
    {
        printf("\n File opened successfully.\n");
        printf("\n Enter a string::\n ");
        gets(ch);
        size=strlen(ch);
        for(i=0;i<size;i++)
        {
            fputc(ch[i],fp);
        }

    
    }
    fclose(fp);
}