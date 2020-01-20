/* C Program to Check Triangle is Equilateral Isosceles or Scalene */

#include<stdio.h>

int main()
{
    int a, b, c;

    printf("\n Please Enter Three Sides of a Triangle : \n");
    scanf("%d%d%d", &a, &b, &c);

    if(a == b && b == c)
    {
        printf("\n This is an Equilateral Triangle\n");
    }
    else if(a == b || b == c || a == c)
    {
        printf("\n This is an Isosceles Triangle\n");
    }
    else
    {
        printf("\n This is a Scalene Triangle\n");
    }
    return 0;
 }
