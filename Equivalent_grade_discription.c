#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char notes[15];
    char grade;

    printf("Input the grade :");
    scanf("%c", &grade);

    grade = toupper(grade);
    switch(grade)
    {
    case 'E':
        strcpy(notes, " Excellent");
        break;
    case 'V':
        strcpy(notes, " Very Good");
        break;
    case 'G':
        strcpy(notes, " Good ");
        break;
    case 'A':
        strcpy(notes, " Average");
        break;
    case 'F':
        strcpy(notes, " Fails");
        break;
    default :
        strcpy(notes, "Invalid Grade Found. \n");
        break;
    }
    printf("You have done : %s\n", notes);
}
