#include<stdio.h>
void dis(char *arr)
{
    arr[5]='B';

}
int main()
{
    char arr[20];
    printf("\n enter the stirng name :: ");
    scanf("%[^\n]s",arr);
    dis(arr);
    printf("String %s",arr);
    return 0;
}