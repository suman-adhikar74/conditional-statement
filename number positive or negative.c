
/*3. Write a C program to check whether a given number is positive or negative.*/


#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number.\n");
    scanf("%d",&number);

    if(number<0)
    {
        printf("%d is a negative numbe\n\n",number);

    }
    else
{

        printf("%d is a positive number\n\n",number);
    }

    return 0;
}
