#include <stdio.h>
int main()
{
   int dayno;
   printf("Input Day No : ");
   scanf("%d",&dayno);
   switch(dayno)
   {
    case 1:
           printf("Sunday \n");
           break;
    case 2:
           printf("Monday \n");
           break;
    case 3:
           printf("Tuesday \n");
           break;
    case 4:
           printf("Wednesday \n");
           break;
    case 5:
           printf("Thursday \n");
           break;
    case 6:
           printf("Friday \n");
           break;
    case 7:
           printf("saturday \n");
           break;
    default:
           printf("Invalid day number. \nPlease try again ....\n");
           break;
      }
}
