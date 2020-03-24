/*4. Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes*/
#include<stdio.h>
int main()
{
    char str[20],ch;
    int size=0;
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
        fseek(fp,0L,SEEK_END);
        size=ftell(fp);
        printf("Fize size is %d byte",size);
    }
    fclose(fp);
}