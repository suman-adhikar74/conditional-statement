#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d  %d %d",&a,&b,&c);




    if (a>b && a>c)
        printf("%d is greater than %d and %d \n",a,b,c);

    if(b>a &&b>c)
            printf("%d is greater than %d and %d \n",b,a,c);

    if(c>a &&c>b)
                printf("%d is greater than %d and %d \n",c,a,b);


    return 0;
}
