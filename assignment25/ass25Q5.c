/*5. Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
void DisplaySchedule(char chDiv)
{
    if(chDiv=='\0')
    {
        return ;
    }
    switch (chDiv)
    {
    case 'A':
    case 'a':
            printf("\n Your exam 07:00 AM ");
        break;
    case 'B':
    case 'b':
            printf("\n Your exam 08:30 AM ");
        break;
    case 'C':
    case 'c':
            printf("\n Your exam 09:20 AM ");
        break;
    case 'D':
    case 'd':
            printf("\n Your exam 10:30 AM ");
        break;
    default:
        printf("\n please check your division [A/B/C/D ora/b/c/d]");
        break ;
    }
}
int main()
{
    char cValue = '\0'; 
    printf("\n Enter your devision::");
    scanf("%c",&cValue);
    DisplaySchedule(cValue);
    return 0;
}