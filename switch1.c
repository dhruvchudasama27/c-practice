// write a programe to findout bmi of user and also find his/her 
#include<stdio.h>
void main()
{
    float weight = 0 ;
    int foot = 0 ;
    int inch = 0;
    float foot_meter = 0;
    float inch_meter = 0;
    float height = 0;
    float bmi = 0;
    int select = 0;
    

    printf("\n 1 for male ");
    printf("\n 2 for female");
    printf("\n select any one");
    scanf("%d",&select);

    switch(select)
    {
        case 1:
        printf(" male ");
        break;

        case 2:
        printf(" female ");
        break;
    }

    printf(" \nweight is ");
    scanf("%f",&weight);

    printf("height in foot ");
    scanf("%d",&foot);

    printf("height in inch");
    scanf("%d",&inch);

    foot_meter = foot / 3.281;
    printf("\n foot meter is %f",foot_meter);

    inch_meter = inch / 39.37;
    printf("\n inch meter is %f",inch_meter);

    height = foot_meter + inch_meter;
    printf("\n height is %f",height);

    bmi = weight / (height*height);
    printf("\n your bmi is %f",bmi);

    if(bmi<16)
    {
        printf(" severe thinness ");
    }
    else if(bmi>=16 && bmi<17)
    {
        printf(" moderate thinness ");
    }
    else if(bmi>=17 && bmi<18.5)
    {
        printf(" mild thinness ");
    }
    else if(bmi>=18.5 && bmi<25)
    {
        printf(" normal ");
    }
    else if (bmi>=25 && bmi<30)
    {
        printf(" overweight ");
    }
    else if(bmi>=30 && bmi<35)
    {
        printf("obese class 1 ");
    }
    else if (bmi>=35 && bmi<40)
    {
        printf("obese class 2 ");
    }
    else if (bmi>=40)
    {
        printf("obese class 3");
    }
}