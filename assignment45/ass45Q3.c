/*3. Write application which accept file name from user and read all data from that file
and display contents on screen.
Input : Demo.txt
Output : Display all data of file.*/
#include<stdio.h>
int main()
{
    char str[20],ch;
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
        printf("\n File opened successfully.\n");
        printf("\n DATA::\n ");
        ch=fgetc(fp);
        while (!feof(fp))
        {
            printf("%c",ch);
            ch=fgetc(fp);
        }
        

    
    }
    fclose(fp);
}