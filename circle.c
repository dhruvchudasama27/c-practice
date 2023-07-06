// findout area of circle
#include<stdio.h>
void main()
{
    float pi = 0;
    float radius = 0;
    float ans = 0;

    printf(" value of pi");
    scanf("%f",&pi);

    printf(" value of radius");
    scanf("%f",&radius);

    
    ans = pi * radius * radius ;
    printf("\nans is %f",ans);
}