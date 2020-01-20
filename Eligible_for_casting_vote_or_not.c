
/*Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.*/


#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age.\n");
    scanf("%d",&age);


    if(age<18)
    {

        printf("Your ae not eligible to vote\n");

    }

    else
    {
        printf("you are eligible to vote\n");
    }

    return 0;
}
