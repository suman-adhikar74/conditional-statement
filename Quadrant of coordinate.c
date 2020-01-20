#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter a X codinate and Y coordinate\n");
    scanf("%d %d",&x,&y);

    if(x>=0 && y>=0)
        printf("This coordinate lies in the first quadrant\n");

    if(x<0  && y>0)
        printf("This coordinate lies in the sercond quadrant\n");

    if(x<0  &&  y<0)
       printf("This lies in the third quadrant\n");

    if (x>0  && y<0)
        printf("This lie sin the fourth quadrant\n");


    return 0;
}
