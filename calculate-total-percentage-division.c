//Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division.


#include <stdio.h>
#include <string.h>

int main()
{
    int roll,phy,che,eng,total;
    double per;
    char nm[20],div[10];
    printf("Input the Name of the Student :");
    scanf("%s",nm);
    printf("Input the Roll Number of the student :");
    scanf("%d",&roll);
    printf("Input  the marks of Physics, Chemistry and English: ");
    scanf("\n%d\n%d\n%d",&phy,&che,&eng);
    total = phy+che+eng;
    per = total/ 3.0;
    if (per>=80)
        strcpy(div,"distinction");
    else
    if (per>=60)
     strcpy(div,"First");
    else
    if (per<60&&per>=48)
        strcpy(div,"Second");
    else
        if (per<48&&per>=36)
        strcpy(div,"Pass");
         else
        strcpy(div,"Fail");

       printf("\nRoll No : %d\nName of Student : %s\n",roll,nm);
       printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in english : %d\n",phy,che,eng);
       printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n",total,per,div);
}
