#include <stdio.h>
int main()
{
    int A, B, c, sum;

    printf("Input three angles of triangle : ");
    scanf("%d %d %d", &A, &B, &c);

    sum = A + B + c;

    if(sum == 180)
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }
 }
