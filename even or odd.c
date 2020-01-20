#include <stdio.h>

int main()
{

    int a;

    printf("Enter a number=");
    scanf("%d",&a);


    if (a%2==0)
        printf("It is an even number\n");
    else
        printf("It is a odd number\n");

    return 0;
}
