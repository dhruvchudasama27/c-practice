// bmi
// weight / ( height*height )
#include<stdio.h>
void main()
{
    float weight = 0, foot = 0, inch=0, foot_meter=0,inch_meter=0,total_meter=0,bmi=0;

    printf("weight is ");
    scanf("%f",&weight);

    printf("height in foot is ");
    scanf("%f",&foot);

    printf("height in inch is");
    scanf("%f",&inch);

    foot_meter = foot / 3.281;
    printf("\n foot meter is %f",foot_meter);

    inch_meter = inch / 39.37;
    printf(" \n inch meter is %f",inch_meter);

    total_meter = foot_meter + inch_meter ;
    printf("\ntotal meter is %f ",total_meter);

    bmi = weight / (total_meter*total_meter);
    printf("\nbmi is %f",bmi);
}