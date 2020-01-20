#include <stdio.h>

int main()
{
    int x = 0,y;
    printf("Enter a number =");
    scanf("%d",&x);

    printf("Enter another number =");
    scanf("%d",&y);

    if (x*y==100)
       printf("The product of %d and %d is equal to hundred.\n",x,y);
    if(x*y>100)
        printf("The product of %d and %d is greater than hundred.\n",x,y);
    else
         printf("The product of %d and %d is less than hundred\n",x,y);
    return 0;
}
