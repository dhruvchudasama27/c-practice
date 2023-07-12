#include<stdio.h>
void main()
{
    float unit = 0;

    printf(" value of unit is ");
    scanf("%f",&unit);

    if(unit > 0 && unit < 100)
    {
        unit = unit * 1;
        unit = ((unit * 5) /100)+unit;
        printf("total price is %f",unit);
    }

    else if(unit >= 100 && unit < 200)
    {
        unit = unit * 2;
        unit = ((unit * 5 )/100)+unit;
        printf("total price is %f",unit);
    }

    else if (unit >=200 && unit < 300)
    {
        unit = unit*3;
        unit = ((unit * 5 )/100)+unit;
        printf("total price is %f",unit);
    }

    else if (unit >=300 && unit < 400)
    {
        unit = unit*4;
        unit = ((unit * 5 )/100)+unit;
        printf("total price is %f",unit);
    }

    else if (unit >=400 )
    {
        unit = unit * 5;
        unit = ((unit * 5 )/100)+unit;
        printf("total price is %f",unit);
    }

    else
    {
        printf(" you have solar panel");
    }
}