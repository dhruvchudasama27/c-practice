// findout bmi
#include<stdio.h>
void main()
{
    float weight = 0;
    float height = 0;
    float ans = 0;

    printf("weight is");
    scanf("%f",&weight);

    printf("height id");
    scanf("%f",&height);

    ans = weight/(height*height);
    printf("\n ans is %f",ans);
}