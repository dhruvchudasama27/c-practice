#include<stdio.h>
void main()
{
    float income = 0;

    printf(" monthly income is ");
    scanf("%f",&income);

    income = income * 12;

    if(income > 0 && income < 300000)
    {
        income = income - ((income*5)/100);
        printf(" net income is %f ",income);
    }

    else if( income >= 300000 && income < 500000)
    {
        income = income - ((income*10)/100);
        printf(" net income is %f",income);   
    }

    else if ( income >= 500000 && income < 800000)
    {
        income = income - ((income*20)/100);
        printf(" net income is %f",income);
    }

    else if ( income >= 800000)
    {
        income = income - ((income*30)/100);
        printf(" net income is %f",income);
    }

    else
    {
        printf(" congratulation you are tax free ");
    }
}